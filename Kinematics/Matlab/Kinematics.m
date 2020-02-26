classdef Kinematics
    %Does inverse and forward kinematics
    %for a two link robot
    
    properties
        inner_length = 0;
        outer_length = 0;
    end
    
    methods
        %Inverse kinematics
        function arm = Kinematics(length1,length2)
            arm.inner_length = length1;
            arm.outer_length = length2;
        end
        
        function q2 = second_angle(arm,x,y)
            a1 = arm.inner_length;
            a2 = arm.outer_length;
            q2 = acos((x^2+y^2-a1^2-a2^2)/(2*a1*a2));
        end
        
        function [q1,q2] = inverse(arm,x,y)
            a1 = arm.inner_length;
            a2 = arm.outer_length;
            obj = Kinematics(a1,a2);
            q2 = obj.second_angle(x,y);
            q1 = atan(y/x) - atan((a2*sin(q2))/(a1+a2*cos(q2)));
        end
        
        function [X,Y] = forward(arm, first_angle, second_angle)
            a1 = arm.inner_length;
            a2 = arm.outer_length;
            X = a2*cos(first_angle + second_angle) + a1*cos(first_angle);
            Y = a2*sin(first_angle + second_angle) + a1*sin(first_angle);
        end
    end
end

