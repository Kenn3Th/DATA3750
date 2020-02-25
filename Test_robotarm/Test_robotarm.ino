#include <Servo.h>
//Lager servo objekt for å kontrollere servoen
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
//Bestemmer posisjonen
int pos1=80, pos2=60, pos3=130,pos4=0;

void setup() {
  //setter servoene som er koblet-til, til servo objekt
  myservo1.attach(A1);
  myservo2.attach(A0);
  myservo3.attach(6);
  myservo4.attach(9);

  myservo1.write(pos1);
  delay(1000);
  myservo2.write(pos2);
  myservo2.write(pos3);
  myservo2.write(pos4);
  delay(1500);
}

void loop() {
  //Snur til høyre
  for(pos1;pos1>0;pos1--) {
    myservo1.write(pos1);
    //forsinker med 5ms, blir brukt til å justere servo fart
    delay(5);
  }
  delay(1000); //venter 1s
  //opner kloa
  for(pos4;pos4<100;pos4++){
    myservo4.write(pos4);
  }
  delay(1000); //venter 1s
  //høyreservo roterer 100grader
  for(pos2;pos2<100;pos2++){
    myservo2.write(pos2);
    delay(5);
  }
  delay(1000); //venter 1s
  //venstreservo roterer 5 grader
  for(pos3;pos3<100;pos3++){
    myservo3.write(pos3);
    delay(5);
  }
  delay(1500); //venter 1.5s
  //stenger kloa
  for(pos4;pos4>0;pos4--) {
    myservo4.write(pos4);
  }
  delay(1000); //venter 1s
  // venstre servo roterer til 100grader, rocker arm lifts.
  for(pos3;pos3<120;pos3++) {
    myservo3.write(pos3);
    delay(5);
  }
  delay(1000);
  // vrir til venstre 
  for(pos1;pos1<180;pos1++) {
    myservo1.write(pos1);
    delay(5);
  }
  delay(1000); //venter 1s
  //Senker armen
  for(pos3;pos3>50;pos3--) {
    myservo3.write(pos3);
    delay(5);
  }
  delay(1000); //venter 1s
  //åpner kloa
  for(pos4;pos4<100;pos4++) {
    myservo4.write(pos4);
  }
  delay(1000); //venter 1s
  //løfter opp armen
  for(pos3;pos3<120;pos3++)
  {
    myservo3.write(pos3);
    delay(5);
  }
  delay(1000); //venter 1s

  //stenger kloa
  for(pos4;pos4>0;pos4--)
  {
    myservo4.write(pos4);
  }
  delay(1000); //venter 1s
}
