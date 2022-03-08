#include <Servo.h> 

int input1 = 11;
int input2 = 10;
//int input3 = 12;
//int input4 = 13;
int pos = 0;

Servo servo_9;

void setup()
{
  pinMode(input1, OUTPUT);
  pinMode(input2, OUTPUT);
 // pinMode(input3, OUTPUT);
 //pinMode(input4OUTPUT);
  servo_9.attach(13);

}

void loop()
{
  digitalWrite(input1, HIGH);
  digitalWrite(input2, LOW);
  delay(10000); //time depends on the time taken to reach the ball base
    
  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);
  delay(3000);
  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  for (pos = 0; pos <= 60; pos += 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  
  digitalWrite(input1, LOW);
  digitalWrite(input2, HIGH);
  delay(10000); // ascend time equal to descend time
    
  digitalWrite(input1, LOW);
  digitalWrite(input2, LOW);
  delay(3000);
  
  // code related to Primary motor switches on and takes the vertical arm to home position
    
  
  for (pos = 60; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  
  }
}

