#include<LiquidCrystal.h>

LiquidCrystal lcd(5,4,3,2,1,0);


const int sensor = A0;
float y, sensor_value;
  
void setup()
{
  
  lcd.begin(16,2);
  lcd.print("EssamMohamed");
}

void loop()
{
  sensor_value = analogRead(sensor);
  y = sensor_value*(5.0/1023.0);
  y = y * 100;
  lcd.setCursor(0,1);
  lcd.print(y);
  lcd.setCursor(5,1);
  lcd.print("UpFrom:");
  lcd.setCursor(12,1);
  lcd.print(millis()/1000);
}
