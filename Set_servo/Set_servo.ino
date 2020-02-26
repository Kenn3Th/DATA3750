#define servoPinLeft 6
#define servoPinRight A0 
int myAngle;
int pulseWidth;

void setup() {
  pinMode(servoPinLeft,OUTPUT);
  pinMode(servoPinRight,OUTPUT);
}

void servoPulse(int servo_pin, int my_angle) {
  pulseWidth = (my_angle*11) + 500; //Converts the angle to pulsewidth value 500-2480
  digitalWrite(servo_pin, HIGH);
  delayMicroseconds(pulseWidth);
  digitalWrite(servo_pin, LOW);
  delay(20-(pulseWidth/1000));  
}

void loop() {
  servoPulse(servoPinLeft, 180);
  servoPulse(servoPinRight, 0);
}
