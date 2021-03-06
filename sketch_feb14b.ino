//#ifndef LOBOTSERVOCONTROLLER_H
#define LOBOTSERVOCONTROLLER_H

#include <Arduino.h>
#include <SoftwareSerial.h>

#define FRAME_HEADER  0x55
#define CMD_SERVO_POS_READ 0x03

#define GET_LOW_BYTE(A) (uint8_t)((A))
#define GET_HIGH_BYTE(A) (uint8_t)((A) >> 8)

//Send
uint16_t Position;


//Receive
uint8_t d1; 
uint8_t d2; 
uint16_t wd;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
while(!Serial){;}
}

void loop() {
  //Send
uint8_t buf[9];

buf[0]= FRAME_HEADER;
buf[1]=FRAME_HEADER;
buf[2]=5;
buf[3]=CMD_SERVO_POS_READ;
buf[4]=1;
buf[5]=GET_LOW_BYTE(Position);
buf[6]=GET_HIGH_BYTE(Position);




//Receive

 d1=buf[0]; 
 d2=buf[1]; 
 wd = (d2 << 8) | d1;
 Serial.print(wd);

Serial.write(buf,8);
delay(1000);
}
