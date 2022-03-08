// C++ code
//
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int but1 = 7;
int but2 = 6;
int but3 = 5;
int but4 = 4;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(but1, INPUT);
  pinMode(but2, INPUT);
  pinMode(but3, INPUT);
  pinMode(but4, INPUT);
}

void loop()
{
  int bs1 = digitalRead(but1);
  if (bs1 == HIGH)
  {
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  } 
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  int bs2 = digitalRead(but2);
  if (bs2 == HIGH)
  {
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  } 
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
 int bs3 = digitalRead(but3);
  if (bs3 == HIGH)
  {
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led4, LOW);
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led3, LOW);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    
  } 
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
  int bs4 = digitalRead(but4);
  if (bs4 == HIGH)
  {
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    delay(1000);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(1000);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    delay(1000);
    digitalWrite(led4, LOW);
  } 
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
  }
}

