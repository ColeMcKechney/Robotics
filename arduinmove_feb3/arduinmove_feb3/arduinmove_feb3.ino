#include <LobotServoController.h>
LobotServoController myse(Serial);

void setup() {
  Serial.begin(9600);
  while(!Serial);
}

void loop() {

  start();
  delay (500);

  grab();
  delay(500);

hold();
delay(500);

rotate();
delay(500);

place();
delay(500);
  
//myse.moveServo(6,160,2000); //move No.0 Servo in 1000ms to 500 position
//delay(2000);
//Serial.flush(); 

//myse.moveServo(3,900,2000); //move No.0 Servo in 1000ms to 1500 position
// delay(2000);
// Serial.flush();
 
// myse.moveServo(5,150,2000); //move No.0 Servo in 1000ms to 1500 position
// delay(2000);
// Serial.flush();
 
//   myse.moveServo(4,850,2000); //move No.0 Servo in 1000ms to 1500 position
//  delay(2000);
//  Serial.flush();
 
//myse.moveServo(2,900,2000); //move No.0 Servo in 1000ms to 1500 position
//delay(2000);
//Serial.flush();

//  myse.moveServo(1,900,2000); //move No.0 Servo in 1000ms to 1500 position
// delay(2000);
//  Serial.flush();

}

void start(){

myse.moveServo(3,500,2000); //move No.0 Servo in 1000ms to 1500 position
delay(1000);
Serial.flush();

myse.moveServo(5,500,2000); //move No.0 Servo in 1000ms to 1500 position
delay(1000);
Serial.flush();

myse.moveServo(4,500,2000); //move No.0 Servo in 1000ms to 1500 position
delay(1000);
Serial.flush();

myse.moveServo(2,500,2000); //move No.0 Servo in 1000ms to 1500 position
delay(1000);
Serial.flush();

 myse.moveServo(1,0,2000); //move No.0 Servo in 1000ms to 1500 position
  delay(1000);
  Serial.flush();

myse.moveServo(6,940,2000); //move No.0 Servo in 1000ms to 1500 position
  delay(1000);
  Serial.flush();
 
}

void grab(){

 myse.moveServo(3,600,500); //move No.0 Servo in 1000ms to 500 position
delay(100);
Serial.flush(); 
 
 myse.moveServo(5,150,1500); //move No.0 Servo in 1000ms to 1500 position
 delay(100);
 Serial.flush();
 
   myse.moveServo(4,600,500); //move No.0 Servo in 1000ms to 1500 position
  delay(100);
  Serial.flush();

  myse.moveServo(1,400,2000); //move No.0 Servo in 1000ms to 1500 position
 delay(2000);
  Serial.flush();
}

void hold(){

myse.moveServo(6,940,2000); //move No.0 Servo in 1000ms to 1500 position
  delay(1000);
  Serial.flush();
    
myse.moveServo(3,500,2000); //move No.0 Servo in 1000ms to 1500 position
delay(1000);
Serial.flush();

myse.moveServo(5,500,2000); //move No.0 Servo in 1000ms to 1500 position
delay(1000);
Serial.flush();

myse.moveServo(4,500,2000); //move No.0 Servo in 1000ms to 1500 position
delay(1000);
Serial.flush();

myse.moveServo(2,500,2000); //move No.0 Servo in 1000ms to 1500 position
delay(1000);
Serial.flush();

  myse.moveServo(1,400,2000); //move No.0 Servo in 1000ms to 1500 position
  delay(1000);
  Serial.flush();
}
void rotate(){
  myse.moveServo(6,160,2000); //move No.0 Servo in 1000ms to 1500 position
  delay(1000);
  Serial.flush();
  
  }
  void place(){
     myse.moveServo(3,600,500); //move No.0 Servo in 1000ms to 500 position
delay(2000);
Serial.flush(); 
 
 myse.moveServo(5,150,1500); //move No.0 Servo in 1000ms to 1500 position
 delay(2000);
 Serial.flush();
 
   myse.moveServo(4,600,500); //move No.0 Servo in 1000ms to 1500 position
  delay(2000);
  Serial.flush();

  myse.moveServo(1,0,2000); //move No.0 Servo in 1000ms to 1500 position
 delay(2000);
  Serial.flush();
  }
