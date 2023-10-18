
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

void loop(){
  while(Serial.available() == 0) {
  }
  int num = Serial.parseInt();
  Serial.println(num);
  long long t = 0, d = 1, per;
  String text = "";
      while(num > 0){
   t = t + (num % 2)* d;
    num = num / 2;
    d = d * 10;
  }
  while(t > 0){
    per = t % 10;
    text = text + (char)('0' + per);
    t = t / 10;
  }

String str = text;
  Serial.println(str);
  if(str[0] == '1'){
          digitalWrite(13, HIGH);
      }
      if(str[1] == '1'){
          digitalWrite(12, HIGH);
      }
      if(str[2] == '1'){
          digitalWrite(11, HIGH);
      }
      if(str[3] == '1'){
          digitalWrite(10, HIGH);
      }
      if(str[4] == '1'){
          digitalWrite(9, HIGH);
      }
      if(str[5] == '1'){
          digitalWrite(8, HIGH);
      }
      if(str[6] == '1'){
          digitalWrite(7, HIGH);
      }
      if(str[7] == '1'){
          digitalWrite(6, HIGH);
      }
      if(str[8] == '1'){
          digitalWrite(5, HIGH);
      }
      if(str[9] == '1'){
          digitalWrite(4, HIGH);
      }
    if(str[10] == '1'){
          digitalWrite(3, HIGH);
      }
      if(str[11] == '1'){
          digitalWrite(2, HIGH);
      }
      delay(2000);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(10);
}
