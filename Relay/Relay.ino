int HV = 7;
int btn = 2;
int btn_state = 0;

void setup() {
  pinMode(HV, OUTPUT);
  pinMode(btn, INPUT);
}

void loop() {
  btn_state = digitalRead(btn);
  if(btn_state == HIGH){
    digitalWrite(HV, HIGH);   
    delay(500);                
    digitalWrite(HV, LOW);  
    delay(500);
  }else{
    digitalWrite(HV,LOW);  
  }                
}
