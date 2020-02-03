 
int motorRightA = 5;    //Right Motor-clockwise
int motorRightB = 6;   //Right Motor-anticlockwise
int motorLeftA = 11;    //Left Motor-clockwise
int motorLeftB = 12;    //Left Motor-clockwise

char bt = 0;       //BT 
/*-----------------------------------------------------------------------------------------------------*/

void setup()
{
  Serial.begin(9600);
  
  pinMode(motorRightA,OUTPUT);
  pinMode(motorRightB,OUTPUT);
  pinMode(motorRightB,OUTPUT);
  pinMode(motorLeftB,OUTPUT);
}
void loop()
{
  if (Serial.available() > 0)
  {
    bt = Serial.read();
    //digitalWrite(led, 1);
    /*_________________________________________________________________________________________________*/
    
    if(bt == 'F')        //move forwards
    {
      digitalWrite(motorRightA, HIGH);
      digitalWrite(motorRightB, LOW);
      digitalWrite(motorLeftA,  HIGH);
      digitalWrite(motorLeftB, LOW);
    }
    else if (bt == 'B')       //move backwards
    {
      digitalWrite(motorRightA, LOW);
      digitalWrite(motorRightB, HIGH);
      digitalWrite(motorLeftA, LOW);
      digitalWrite(motorLeftB, HIGH);
    }
    else if (bt == 'S')     //stop!!
    {   
      digitalWrite(motorRightA, LOW);
      digitalWrite(motorRightB, LOW);
      digitalWrite(motorLeftA, LOW);
      digitalWrite(motorLeftB, LOW);
    }
    else if (bt == 'R')    //right
    {
      digitalWrite(motorRightA, HIGH);
      digitalWrite(motorRightB, LOW);
      digitalWrite(motorLeftA, LOW);
      digitalWrite(motorLeftB, LOW);
    }
    else if (bt == 'L')     //left
    {
      digitalWrite(motorRightA, LOW);
      digitalWrite(motorRightB, LOW);
      digitalWrite(motorLeftA, HIGH);
      digitalWrite(motorLeftB, LOW);
    }
    else if (bt == 'I')    //forward right
    {
      digitalWrite(motorRightA, HIGH);
      digitalWrite(motorRightB, LOW);
      digitalWrite(motorLeftA, LOW);
      digitalWrite(motorLeftB, HIGH);
    }
    else if (bt == 'G')    //forward left
    {
      digitalWrite(motorRightA, LOW);
      digitalWrite(motorRightB, HIGH);
      digitalWrite(motorLeftA, HIGH);
      digitalWrite(motorLeftB, LOW);
   }

      
    }
  
  }
  
