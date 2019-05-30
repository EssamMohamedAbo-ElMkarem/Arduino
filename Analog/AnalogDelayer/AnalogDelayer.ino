const int sensor = A5;
float sensor_value, y;
const int led = 12;

void setup(){
  pinMode(led,OUTPUT);
}

void loop(){
  sensor_value = analogRead(sensor);
  y = sensor_value*(5.0/1023);
  y = y*100;
  if (y < 30){
    digitalWrite(led, HIGH);
  }else if(y > 30){
    digitalWrite(led, LOW);
  }
}
