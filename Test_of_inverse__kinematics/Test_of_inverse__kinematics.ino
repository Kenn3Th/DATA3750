#include <Servo.h>
/*** Lager servo object **/
Servo rotationServo;
Servo outerArmServo;
Servo innerArmServo;
Servo clawServo;
/*** Bestemmer start posisjon***/
int rotation=100, outerArm=80, innerArm=40, claw=20;

void setup() {
  
  rotationServo.attach(A1);
  outerArmServo.attach(6);
  innerArmServo.attach(A0);
  clawServo.attach(9);
  
  homeRotation(rotation);
  homeInnerArm(innerArm);
  homeOuterArm(outerArm);
  homeClaw(claw);
  
}

void loop() {
  float q1=0.0, q2=0.0;

  q2 = secondAngle(2.2,1.3);
  q1 = firstAngle(2.2,1.3,q2); 

  outerArm = (int) round(q2);
  innerArm = (int) round(q1);
  
  homeRotation(rotation);
  homeInnerArm(innerArm);
  homeOuterArm(outerArm);
  homeClaw(claw);
}
