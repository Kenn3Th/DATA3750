#define servopin A0;
int myangle;
int pulsewidth;

void setup() {
 pinMode(servopin,OUTPUT); //Set steering gear interface as output
}

void servopulse(int servopin, int myangle) {
  pulsewidth = (myangle*11) + 500; //Converts the angle to pulsewidth value 500-2480
  digitalWrite(servopin, HIGH);
  delayMicroseconds(pulsewidth);
  digitalWrite(servopin, LOW);
  delay(20-(pulsewidth/1000));  
}

void loop() {
  servopulse(servopin,0); //set steering gear angle

}
