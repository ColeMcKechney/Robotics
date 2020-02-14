char var = 'a';
int var2 = 45;
char var3[10]="hello";
 int Time = 2514;
 
#define GET_LOW_BYTE(A) (uint8_t)((A))

#define GET_HIGH_BYTE(A) (uint8_t)((A) >> 8)

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
while(!Serial){;}
}

void loop() {
  // put your main code here, to run repeatedly:

 uint8_t buf[3];
  buf[0]=GET_LOW_BYTE(Time);
  buf[1]=GET_HIGH_BYTE(Time);
Serial.write(buf,2);
delay(1000);
//Serial.print(buf[0]);
//Serial.print(buf[1]);

}
