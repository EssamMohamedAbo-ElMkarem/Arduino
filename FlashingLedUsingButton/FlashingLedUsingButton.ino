int button = 2;
int led = 12;
int btn_state = 0;

void setup() {
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  btn_state = digitalRead(button);
  if(btn_state == HIGH){
    digitalWrite(led,HIGH);
  }else{
    digitalWrite(led,LOW);
  }
}
/*
void flash(int pin){
  digitalWrite(pin,HIGH);
  delay(500);
  digitalWrite(pin,LOW);
  delay(500);
}*/
