
float innerLength = 5.8; //cm
float outerLength = 4.3; //cm

float firstAngle(float x, float y, float q2){
  float angle, a1, a2;
  a1 = innerLength;
  a2 = outerLength;
  angle = atan(y/x) - atan((a2*sin(q2))/(a1+a2*cos(q2)));
  return angle;
}

float secondAngle(float x, float y){
   float angle, a1, a2;
   a1 = innerLength;
   a2 = outerLength;
   angle = acos((pow(x,2)+pow(y,2)-pow(a1,2)-pow(a2,2))/(2*a1*a2));
   return angle;
}
