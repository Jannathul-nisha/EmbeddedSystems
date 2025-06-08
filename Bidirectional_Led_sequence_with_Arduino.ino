int led_1=9;
int led_2=10;
int led_3=11;
int led_in=5;
void setup()
{
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
  pinMode(led_in,INPUT);
}

void loop()
{
  int input=digitalRead(led_in);
  int i;
  if(input==LOW){
    for(i=11;i>=9;i--){
      digitalWrite(i,HIGH);
      delay(1000);
      digitalWrite(i,LOW);
    }
  }
  else{
    for(i=9;i<=11;i++){
      digitalWrite(i,HIGH);
      delay(1000);
      digitalWrite(i,LOW);
    }
  }
}
