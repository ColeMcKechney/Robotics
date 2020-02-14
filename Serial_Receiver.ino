char var;
int var2;
char var3[10];
uint8_t buf[3];

uint8_t d1; 
uint8_t d2; 
uint16_t wd;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
{
  Serial.readBytes(buf,2);
 // Serial.println(var3);
// Serial.print(buf[0]);
   // Serial.print(buf[1]);
 d1=buf[0]; 
 d2=buf[1]; 
 wd = (d2 << 8) | d1;
 Serial.print(wd);
}
}
