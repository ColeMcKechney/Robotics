char var = 'a';
int var2 = 45;
char var3[10]="hello";
 

//SerialX->write(buf,1);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
while(!Serial){;}
}

void loop() {
  // put your main code here, to run repeatedly:

 uint8_t buf[3];
  buf[0]=5;
  buf[1]=8;
Serial.write(buf,2);
delay(1000);
}
