#define FRAME_HEADER  0x55
#define CMD_SERVO_POS_READ 0x03 // check this

#define GET_LOW_BYTE(A) (uint8_t)((A))
#define GET_HIGH_BYTE(A) (uint8_t)((A) >> 8)

void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
request_positions();
delay(1000);
}

void request_positions(){
  uint8_t buf[10];

  buf[0]= FRAME_HEADER;
  buf[1]=FRAME_HEADER;
  buf[2]=3;
  buf[3]=CMD_SERVO_POS_READ;
  buf[4]=servoID;

  Serial.write(buf,8);
}
