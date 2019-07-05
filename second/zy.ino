byte DIGITAL_DISPLAY[10][8] = { //设置0-9数字所对应数组

{0,1,1,1,1,0,1,1}, // = 0

{0,1,1,0,0,0,0,0}, // = 1

{0,0,1,1,0,1,1,1}, // = 2

{0,1,1,1,0,1,0,1}, // = 3

{0,1,1,0,1,1,0,0}, // = 4

{0,1,0,1,1,1,0,1}, // = 5

{0,1,0,1,1,1,1,1}, // = 6

{0,1,1,1,0,0,0,0}, // = 7

{0,1,1,1,1,1,1,1}, // = 8

{0,1,1,1,1,1,0,1} // = 9

};

void setup() 
{ //设定4-11号数字端口为输出
Serial.begin(9600);
for(int i=4;i<=11;i++){

pinMode(i, OUTPUT);
}

}
int income;
void loop()
{
//0-9数字显示
if(Serial.available()>0){  
income = Serial.read();
}
int pin = 4;
switch(income)
{
  case '0':
  for (int s = 0; s < 8; s++)
  {
    digitalWrite(pin, DIGITAL_DISPLAY[0][s]);
    pin++;
  }
  break;
  case '1':
  for (int s = 0; s < 8; s++)
  {
    digitalWrite(pin, DIGITAL_DISPLAY[1][s]);
    pin++;
  }
  break;
  case '2':
  for (int s = 0; s < 8; s++)
  {
    digitalWrite(pin, DIGITAL_DISPLAY[2][s]);
    pin++;
  }
  break;
  case '3':
  for (int s = 0; s < 8; s++)
  {
    digitalWrite(pin, DIGITAL_DISPLAY[3][s]);
    pin++;
  }
  break;
  case '4':
  for (int s = 0; s < 8; s++)
  {
    digitalWrite(pin, DIGITAL_DISPLAY[4][s]);
    pin++;
  }
  break;
  case '5':
  for (int s = 0; s < 8; s++)
  {
    digitalWrite(pin, DIGITAL_DISPLAY[5][s]);
    pin++;
  }
  break;
  case '6':
  for (int s = 0; s < 8; s++)
  {
    digitalWrite(pin, DIGITAL_DISPLAY[6][s]);
    pin++;
  }
  case '7':
  for (int s = 0; s < 8; s++)
  {
    digitalWrite(pin, DIGITAL_DISPLAY[7][s]);
    pin++;
  }
  case '8':
  for (int s = 0; s < 8; s++)
  {
    digitalWrite(pin, DIGITAL_DISPLAY[8][s]);
    pin++;
  }
  case '9':
  for (int s = 0; s < 8; s++)
  {
    digitalWrite(pin, DIGITAL_DISPLAY[9][s]);
    pin++;
  }
}
delay(1000);
}
