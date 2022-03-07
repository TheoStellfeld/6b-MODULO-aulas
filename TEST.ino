const int botao = 2;
const int ledVm = 3;
const int ledVd = 4;
const int ledAm = 5;
const int ledLa = 6;
  

void setup()
{
 pinMode(botao, INPUT);
 pinMode(ledVm, OUTPUT);
 pinMode(ledVd, OUTPUT);
 pinMode(ledAm, OUTPUT);
 pinMode(ledLa, OUTPUT);
}

void loop()
{
int var = digitalRead(botao);
if (var){
 digitalWrite( ledVd, HIGH);
  delay(10);
 digitalWrite( ledAm, HIGH);
  delay(10);
 digitalWrite( ledLa, HIGH);
  delay(10);
 digitalWrite( ledVm,LOW);
  delay(10);
  }else{
 digitalWrite( ledVm, LOW);
  delay(10);
 digitalWrite( ledAm, LOW);
  delay(10);
 digitalWrite( ledLa, LOW);
  delay(10);
 digitalWrite( ledVm, HIGH);
  delay(10);
  }
delay(10);
}
