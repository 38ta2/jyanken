#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Servo.h>

Servo thumbservo,indexservo,middleservo,ringservo,littleservo;  //Servoオブジェクトを作成


void setup() { 
  
   Serial.begin(9600);
   randomSeed(analogRead(2));
   thumbservo.attach(5);  // attaches the servo on pin 5 for the thumb 
   indexservo.attach(6); // attaches the servo on pin 6 for index finger
   middleservo.attach(9); // attaches the servo on pin 9 for the middle finger
   ringservo.attach(10); // attaches the servo on pin 10 for the ring finger
   littleservo.attach(11); // attaches the servo on pin 11 for the little finger   
   pinMode(13, INPUT_PULLUP);
   int i;
   
} 
  

void loop() {
  long k;
  if(digitalRead(13) == LOW){
    k = random(2);
  Serial.println(k);
    if(k == 1){
      indexservo.write(0);
      middleservo.write(180);
      ringservo.write(180);
      littleservo.write(0);
      
    }else if(k == 2){
    indexservo.write(180);
  middleservo.write(0);
  ringservo.write(0);
  littleservo.write(180);  
    }else{
      indexservo.write(180);
  middleservo.write(0);
  ringservo.write(0);
  littleservo.write(180);
    }
   delay(1000);
  }
    
  }
