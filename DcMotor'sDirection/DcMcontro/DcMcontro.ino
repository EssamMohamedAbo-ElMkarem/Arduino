int dir1 = 13;
int dir2 = 0;

void setup() {
  pinMode(dir1,OUTPUT);
  pinMode(dir2,OUTPUT);
}

void loop() {
  digitalWrite(dir1, HIGH);
  digitalWrite(dir2,LOW);
  delay(2000);
  digitalWrite(dir2, HIGH);
  digitalWrite(dir1,LOW);
  delay(2000);
  
}
