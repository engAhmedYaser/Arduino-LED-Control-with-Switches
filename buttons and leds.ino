// C++ code
//
const int led1 = 3;
const int led2 = 4;
const int led3 = 5;
const int led4 = 6;
const int led5 = 7;
const int led6 = 11;
int button1 = 10;
int button2= 9; int i;
void setup()
{
  for(i=3;i<=7;i++){
    pinMode(i, OUTPUT);}
  pinMode(button1, INPUT);pinMode(button2, INPUT);pinMode(led6, OUTPUT);
}

void loop()
{

  if(digitalRead(button1)==HIGH){
  analogWrite(led1, 127);
    digitalWrite(led2,HIGH);  digitalWrite(led3,HIGH);}
if(digitalRead(button1)==LOW){
  analogWrite(led1, 0);
  digitalWrite(led2,LOW);  digitalWrite(led3,LOW);}
   if(digitalRead(button2)==HIGH){
  analogWrite(led6, 127);
    digitalWrite(led4,HIGH);  digitalWrite(led5,HIGH);}
if(digitalRead(button2)==LOW){
  analogWrite(led6, 0);
  digitalWrite(led5,LOW);  digitalWrite(led4,LOW);}}