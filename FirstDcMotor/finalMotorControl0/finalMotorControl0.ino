int speed;
int pot = A0;
int right = 2;
int left = 1;
int speed_pin = 9;
int right_dir = 13;
int left_dir = 12;

void setup() {
  pinMode(right_dir, OUTPUT);
  pinMode(left_dir, OUTPUT);
  pinMode(right, INPUT);
  pinMode(left, INPUT);
}

void loop() {
  speed = analogRead(pot)/4;
  analogWrite(speed_pin, speed);

  if(right == HIGH){
    digitalWrite(right_dir, HIGH);
    digitalWrite(left_dir, LOW);
  }else if(left == HIGH){
    digitalWrite(left_dir, HIGH);
    digitalWrite(right_dir, LOW);
  }else{
    digitalWrite(right_dir, LOW);
    digitalWrite(left_dir, LOW);
  }
}
