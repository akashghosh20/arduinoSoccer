int relay1 = 4;     //motor1
int relay2 = 5;    //motor1
int relay3 = 6;   //motor2
int relay4 = 7;   //motor2
// int Speed1 = 9; //speed
// int Speed2 = 10; //speed

char bt = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
}
void loop()
{
  if (Serial.available() > 0)
  {
    bt = Serial.read();
    /*______________________________________________________________________*/
    if (bt == 'F')       //move forwards
    {
      Serial.print("F\n");
      digitalWrite(relay1, LOW);
      digitalWrite(relay2, HIGH);
      digitalWrite(relay3, LOW);
      digitalWrite(relay4, HIGH);
    }
    else if (bt == 'B')       //move backwards
    {
      Serial.print("B\n");
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, LOW);
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, LOW);
    }
    else if (bt == 'S')     //stop!!
    {
      Serial.print("S\n");
      digitalWrite(relay1, LOW);
      digitalWrite(relay2, LOW);
      digitalWrite(relay3, LOW);
      digitalWrite(relay4, LOW);
    }
    else if (bt == 'R')    //right
    {
      Serial.print("R\n");
      digitalWrite(relay1, LOW);
      digitalWrite(relay2, HIGH);
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, LOW);
    }
    else if (bt == 'I')       //move FORWARD RIGHT
    {
      Serial.print("FR\n");
      digitalWrite(relay1, LOW);
      digitalWrite(relay2, HIGH);
      digitalWrite(relay3, LOW);
      digitalWrite(relay4, LOW);
    }
    else if (bt == 'J')       //move BACKWARD RIGHT
    {
      Serial.print("BR\n");
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, LOW );
      digitalWrite(relay3, LOW);
      digitalWrite(relay4, LOW);
    }
    else if (bt == 'L')     //left
    {
      Serial.print("L\n");
      digitalWrite(relay1, HIGH);
      digitalWrite(relay2, LOW);
      digitalWrite(relay3, LOW);
      digitalWrite(relay4, HIGH);
    }
    else if (bt == 'G')       //move FORWARD LEFT
    {
      Serial.print("FL\n");
      digitalWrite(relay1, LOW);
      digitalWrite(relay2, LOW);
      digitalWrite(relay3, LOW);
      digitalWrite(relay4, HIGH);
    }
    else if (bt == 'H')       //move BACKWARD LEFT
    {
      Serial.print("BL\n");
      digitalWrite(relay1, LOW);
      digitalWrite(relay2, LOW);
      digitalWrite(relay3, HIGH);
      digitalWrite(relay4, LOW);
    }
  }
}
