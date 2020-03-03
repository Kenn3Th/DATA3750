/***Funksjoner for å returnere til hjem verdien ***/
void homeRotation(int rotation){
    if (rotation != 80){
      if(rotation < 80){
        for(rotation; rotation<=90;rotation++){
          rotationServo.write(rotation);
          delay(100); //Justerer servo fart i ms
        }
      }else{
        for(rotation; rotation>=80;rotation--){
          rotationServo.write(rotation);
          delay(100); //Justerer servo fart i ms
        }
      }
      delay(1000);  
  }
}

void homeInnerArm(int arm){
    if (arm != 90){
      if(arm < 90){
        for(arm; arm<=90;arm++){
          innerArmServo.write(arm);
          delay(5); //Justerer servo fart i ms
        }
      }else{
        for(arm; arm>=90;arm--){
          innerArmServo.write(arm);
          delay(10); //Justerer servo fart i ms
        }
      }
      delay(1000);  
  }
}

void homeOuterArm(int arm){
    if (arm != 80){
      if(arm < 80){
        for(arm; arm<=80;arm++){
          outerArmServo.write(arm);
          delay(100); //Justerer servo fart i ms
        }
      }else{
        for(arm; arm>=80;arm--){
          outerArmServo.write(arm);
          delay(100); //Justerer servo fart i ms
        }
      }
      delay(1000);  
  }
}
void homeClaw(int claw){
    if (claw != 100){
      if(claw < 100){
        for(claw; claw<=100;claw++){
          clawServo.write(claw);
          delay(100); //Justerer servo fart i ms
        }
      }else{
        for(claw; claw>=100;claw--){
          clawServo.write(claw);
          delay(100); //Justerer servo fart i ms
        }
      }
      delay(1000);  
  }
}
