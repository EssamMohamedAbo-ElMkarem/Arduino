int speed;
int pot = A0;
int right = 0;
int left = 1;
int speed_pin = 9;
int right_dir = 13;
int left_dir = 12;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(right, INPUT);
  pinMode(left, INPUT);
}

void loop() {
  digitalWrite(right_dir, LOW);
  digitalWrite(left_dir, LOW); 
    
  if(digitalRead(right) == HIGH){
    digitalWrite(right_dir, HIGH);
    digitalWrite(left_dir, LOW);
  }else if(digitalRead(left) == HIGH){
    digitalWrite(left_dir, HIGH);
    digitalWrite(right_dir, LOW);
  }else{
    digitalWrite(right_dir, LOW);
    digitalWrite(left_dir, LOW);
  }
  
/*
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);

  delay(2000);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
  delay(2000);
*/
  speed = analogRead(pot)/4.0;
  delay(20);
  analogWrite(speed_pin, speed);

  
  }
