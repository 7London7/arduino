
void setup() {
  Serial.begin(9600);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);

}

void loop() {
  if(Serial.available()) {
            
        int num = Serial.parseInt();
      Serial.println(num);
        int t=0;
        int d=1;
    while(num > 0){
   t +=(num % 2) * d;
    num = num / 2;
    d = d * 10;
        }Serial.print(t);
      if(t % 10 == 1){
          digitalWrite(13, HIGH);
      }
      t = t / 10;
      if(t % 10 == 1){
          digitalWrite(12, HIGH);
      }
      t = t / 10;
      if(t % 10 == 1){
          digitalWrite(11, HIGH);
      }
      t = t / 10;
      if(t % 10 == 1){
          digitalWrite(10, HIGH);
      }
      t = t / 10;
      if(t % 10 == 1){
          digitalWrite(9, HIGH);
      }
      t = t / 10;
      if(t % 10 == 1){
          digitalWrite(8, HIGH);
      }
      t = t / 10;
      if(t % 10 == 1){
          digitalWrite(7, HIGH);
      }
      t = t / 10;
      if(t % 10 == 1){
          digitalWrite(6, HIGH);
      }
      t = t / 10;
      if(t % 10 == 1){
          digitalWrite(5, HIGH);
      }
      t = t / 10;
      if(t % 10 == 1){
          digitalWrite(4, HIGH);
      }
      t = t / 10;
      if(t % 10 == 1){
          digitalWrite(3, HIGH);
      }
      t = t / 10;
      if(t % 10 == 1){
          digitalWrite(2, HIGH);
      }
      t = t / 10;
   }         
}
  
