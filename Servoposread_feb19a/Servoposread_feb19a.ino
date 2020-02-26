#define FRAME_HEADER  0x55
#define CMD_SERVO_POS_READ 0x1C

#define GET_LOW_BYTE(A) (uint8_t)((A))
#define GET_HIGH_BYTE(A) (uint8_t)((A) >> 8)

uint16_t Position;
uint8_t servoID = 4;



void setup() {
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  request_positions(servoID);
  delay(1000);

  read_position();
  delay(1000);
}

void request_positions(uint8_t servoID) {
  uint8_t buf[6];

  buf[0] = FRAME_HEADER;
  buf[1] = FRAME_HEADER;
  buf[2] = 3;
  buf[3] = CMD_SERVO_POS_READ;
  buf[4] = servoID;

  Serial.write(buf, 5);
}

void read_position() {

  uint8_t buf[8];
  uint8_t d1;
  uint8_t d2;
  uint16_t wd;


  //  buf[0] = FRAME_HEADER;
  //  buf[1] = FRAME_HEADER;
  //  buf[2] = 5;
  //  buf[3] = CMD_SERVO_POS_READ;
  //  buf[4] = servoID;
  //  buf[5] = GET_LOW_BYTE(Position);
  //  buf[6] = GET_HIGH_BYTE(Position);

  if (Serial.available())
  {
    Serial.readBytes(buf, 7);
    d1 = buf[5];
    d2 = buf[6];
    wd = (d2 << 8) | d1;
    Serial.println(wd);
  }
}
