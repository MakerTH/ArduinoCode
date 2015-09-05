int ad_conv(byte channel, byte num);
float calc_RH10(float adval);
float calc_TC10(float adval);
int flg=0;
int adval, RH10, TC10;

void setup()
{
Serial.begin(9600);
delay(100);
}

void loop()
{
//getting the readings from the sensors
adval = ad_conv(0, 30); // 30 samples
RH10 = calc_RH10(adval); // humidity
Serial.println(RH10);

adval = ad_conv(1, 30); // 30 samples
TC10 = calc_TC10(adval); // temperature
Serial.println(TC10);
}



int ad_conv(byte channel, byte num)
{
long sum = 0;
byte n;

for (n=0; n<num; n++)
{
sum = sum + analogRead(channel);
}
return(sum / num);
}


float calc_RH10(float adval)
{
//int RH10;
//RH10 = adval + 6 * adval / 10 + 3 * adval / 100; // 1.63 * adval
float RH10;
RH10 = 0.163 * adval;
return(RH10)*100;
}


float calc_TC10(float adval)
{
//int TC10;
//TC10 = adval + 2 * adval / 10 + adval / 100 - 380;
//return(TC10);
float Temp;
// double Thermister(int RawADC)
// double Temp;
Temp = log(((10240000/adval) - 10000)); //9730 is the actual measured value of the resistor used
Temp = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * Temp * Temp ))* Temp );
Temp = Temp - 273.15; // Convert Kelvin to Celcius
//Temp = (Temp * 9.0)/ 5.0 + 32.0; // Convert Celcius to Fahrenheit
return Temp*100;
}  
