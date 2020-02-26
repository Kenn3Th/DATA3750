import numpy as np
import Kinematics_class as Kc


inner_length = float(input("Length of the inner arm?\n"))
outer_length = float(input("Length of the outer arm?\n"))
answer = input("Inverse og Forward?\n")

robotic_arm = Kc.Kinematics(inner_length,outer_length)

if answer.lower()== "inverse":
    print("Need two coordinates for where to go\nand I will provide the angles for the arm")
    x = float(input("What is the X coordinate?\n"))
    y = float(input("What is the Y coordinate?\n"))
    [q1,q2] = robotic_arm.inverse(x,y)
    print(f"The first angle is {q1:.2f} degrees and \nthe second angel is {q2:.2f} degrees")
elif answer.lower() == "forward":
    print("Need two angles for how the arm should strech and I'll give you the X and Y coordinates")
    first_angle = float(input("What is the fisrt angle?\n"))
    second_angle = float(input("What is the second angle?\n"))
    [x,y] = robotic_arm.forward(first_angle,second_angle)
    print(f"The x, y coordinate is = [{x:.2f},{y:.2f}]")
else:
    print("Error!")
    print("I asked for forward or inverse kinematics")
    print("Godbye!")


