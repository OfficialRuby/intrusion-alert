int buzzerPin = 8;                
int sensorPin = 7;              
int val = 0; 
int redLED =4;
//int greenLED = 5;
int blueLED = 5;  

void setup()
{
//  pinMode(ledPin, OUTPUT);      
  pinMode(sensorPin, INPUT); 
  pinMode(redLED, OUTPUT); 
//  pinMode(greenLED, OUTPUT); 
  pinMode(blueLED, OUTPUT); 

 }

 void loop()
 {
  val = digitalRead(sensorPin);  
  if (val == HIGH) 
    {            
      //Triger Event
      for (int led = 3; led < 6; led++){
      digitalWrite(led, HIGH);
      delay(150);
      digitalWrite(led, LOW);
            }
      raiseAlarm();

      for (int led = 3; led < 6; led++){
      digitalWrite(led, HIGH);
      delay(150);
      digitalWrite(led, LOW);
      }
    }

     else {
    //Trigger Event
//    digitalWrite(ledPin, LOW); 
    noTone(buzzerPin);

    }
 }
    



void raiseAlarm() {                             //This function produces the 4th siren(POLICE) sound with led transition.
//  for (int led = 3; led <=6; led++){
//      digitalWrite(led, HIGH);
//      delay(100);
//      digitalWrite(led, LOW);
//  }
      

  for(int hz = 440; hz < 1000; hz++){
    tone(buzzerPin, hz, 80);    
    delay(5);
  }




      for (int led = 3; led < 6; led++){
      digitalWrite(led, HIGH);
      delay(10);
      digitalWrite(led, LOW);
      }


    
  for(int hz = 1000; hz > 440; hz--){
    tone(buzzerPin, hz, 80);
    delay(5);
    }

//      for (int led = 3; led <=6; led++){
//      digitalWrite(led, HIGH);
//      delay(100);
//      digitalWrite(led, LOW);
//  }


  }

  void RGB()
  {

      for (int led = 3; led < 6; led++){
      digitalWrite(led, HIGH);
      delay(150);
      digitalWrite(led, LOW);
      raiseAlarm();
  }
  }





  

    
