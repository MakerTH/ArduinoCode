/*
photoelectric       arduino
  red----------------5V
  black--------------GND
  yellow-------------9
*/
typedef unsigned char uchar;
uchar signal=9;
void setup() 
{
  pinMode(signal,INPUT);
  Serial.begin(9600);  
  // put your setup code here, to run once:

}

void loop() 
{
  if(!digitalRead(signal))
  {
    Serial.println("The chip receives the sensor signal");
  }
  while(!digitalRead(signal));
  // put your main code here, to run repeatedly:

}
