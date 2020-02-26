'''
This class is for a two jointed robotic arm.
It has two function, inverse kinematics and forward kinematics
'''

import numpy as np

class Kinematics:

    def __init__(self, inner_length, outer_length):
        self.inner_length = inner_length
        self.outer_length = outer_length
        
    #Inverse kinematics
    def inverse(self, X, Y):
        a1 = self.inner_length
        a2 = self.outer_length
        #Calculating Second angle
        q2 = np.arccos((X**2+Y**2-a1**2-a2**2)/(2*a1*a2))
        phi = Y/float(X)
        theta = (a2*np.sin(q2))/(a1+a2*np.cos(q2))
        #Calculating first angle
        q1 = np.arctan(phi) - np.arctan(theta) 
        return q1, q2

    #Forward kinematics
    def forward(self, first_angle, second_angle):
        a1 = self.inner_length
        a2 = self.outer_length
        phi = first_angle + second_angle
        theta = second_angle
        X = a2*np.cos(phi)+a1*np.cos(theta)
        Y = a2*np.sin(phi)+a1*np.sin(phi)
        return X,Y


if __name__ == "__main__":

    obj = Kinematics(4,2)

    print(obj.inverse(2,1))
    print(obj.forward(np.pi,np.pi/2))
