/*** 
Kode for å teste at servoene fungerer og 
hvilken pin som tilhører hvilken servo
***/

#include <Servo.h>
Servo myservo;
int pos;
void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  myservo.attach(9);
  myservo.write(115);
  /*
  pos=0;
  for(pos; 0<pos<90 ;pos++){
    myservo.write(pos);
    delay(50);
  }*/
  
  delay(1000);
}

/*** 
A1 = roterer kroppen til robotarmen
A0 = hev/senk ytterste ledd -> 0 = nederst
6 = hev/senk innerste ledd -> 0 = nederst
9 = klypa -> 180 = åpen -> 115 = stengt
***/
