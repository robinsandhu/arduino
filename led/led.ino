void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int num,i;
  Serial.print("Enter the number of times you want to blink the led: ");
  while(Serial.available()==0){
    
  }
  num = Serial.parseInt();
  Serial.println("Counter on LED Blinks: ");
  for(i=1;i<=num;i++){
    digitalWrite(13,LOW);
    delay(300);
    digitalWrite(13,HIGH);
    delay(300);
    Serial.print(i);
  }  
}
