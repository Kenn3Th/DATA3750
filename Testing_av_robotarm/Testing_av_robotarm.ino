#include <Servo.h>
/*** Lager servo object **/
Servo rotationServo;
Servo outerArmServo;
Servo innerArmServo;
Servo clawServo;
/*** Bestemmer start posisjon***/
int rotation = 0, outerArm = 0, innerArm = 0, claw = 0;

void setup() {
  Serial.begin(9600);
  
  rotationServo.attach(A1);
  outerArmServo.attach(6);
  innerArmServo.attach(A0);
  clawServo.attach(9);

  rotationServo.write(rotation);
  delay(100);
  outerArmServo.write(outerArm);
  delay(100);
  innerArmServo.write(innerArm);
  delay(100);
  clawServo.write(claw);
}

void loop() {
  delay(1000);
  
  for(rotation; rotation<180;rotation++) {
    rotationServo.write(rotation);
    Serial.write("Rotating\n");
    Serial.print(rotation);
    delay(500); //Justerer servo fart i ms
  }
  delay(1000);
/*
  if (rotation != 0){
    if(rotation < 0){
      for(rotation; rotation<0;rotation++){
        rotationServo.write(rotation);
        Serial.write("Comming home\n");
        delay(5); //Justerer servo fart i ms
      }
    }else{
      for(rotation; rotation>0;rotation--){
        rotationServo.write(rotation);
        Serial.write("Comming home\n");
        delay(10); //Justerer servo fart i ms
      }
    }
    Serial.write("Did I go home?");
    delay(10000);
  }
  */
}
