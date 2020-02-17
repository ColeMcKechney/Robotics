#ifndef LOBOTSERVOCONTROLLER_H
#define LOBOTSERVOCONTROLLER_H

#include <Arduino.h>
#include <SoftwareSerial.h>

#define FRAME_HEADER  0x55
#define CMD_SERVO_POS_READ 0x03

#define GET_LOW_BYTE(A) (uint8_t)((A))
#define GET_HIGH_BYTE(A) (uint8_t)((A) >> 8)

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
unin8_t buf[9];

buf[0]= FRAME_HEADER;
buf[1]=FRAME_HEADER;
buf[2]=5;
buf[3]=CMD_SERVO_POS_READ;
buf[4]=1;
buf[5]=GET_LOW_BYTE(Position);
buf[6]=GET_HIGH_BYTE(Position);
buf[7]=servoID;

Serial.write(buf,8);
delay(1000);
