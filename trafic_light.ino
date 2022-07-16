int redLed = 5; // initialize digital pin 5
int yellowLed = 4; // initialize digital pin 4
int greenLed = 3; //initialize digital pin 3
void setuo()
{ 
    pinMode(redLed, OUTPUT);// set the pin with red led as"OUTPUT"
    pinMode(yellowLed, OUTPUT); // set the pin with the yellow led as a "OUTPUT"
    pinMode(greenLed, OUTPUT); // set the pin with the green les as a "output"    
} 
void loop()
{
    digitalWrite(greenLed, HIGH);// turn on the green led
    delay(5000);//Wait 5 sec
    digitalWrite(greenLed, LOW);// turn off green led 
    for(int i=0,i<3;i++)//blinks for 3 times
    {
        delay(500);//wait 0.5seconds
        digitalWrite(yellowLed, HIGH);//turn on yellow led
        delay(500);//wait 0.5 seconds
        digitalWrite(yellowLed, LOW);// turn off yellow led        
    }
    delay(500);//wait 0.5 seconds
    digitalWrite(redLed, HIGH);// turn on redLed
    delay(5000);//wait for 5 seconds
    digitalWrite(redLed, LOW);// turn off redLed
    int redLed = 5; // initialize digital pin 5
int yellowLed = 4; // initialize digital pin 4
int greenLed = 3; //initialize digital pin 3
void setup()
{ 
    pinMode(redLed, OUTPUT);// set the pin with red led as"OUTPUT"
    pinMode(yellowLed, OUTPUT); // set the pin with the yellow led as a "OUTPUT"
    pinMode(greenLed, OUTPUT); // set the pin with the green les as a "output"
       
} 
void loop()
{   
  for(int i=0;i<3;i++)//blinks for 3 times  
  {digitalWrite(greenLed, HIGH);//// turn on the green led
  delay(1000);//Wait 5 sec
  digitalWrite(greenLed, LOW);// turn off green led
  delay(500);
} 

  for(int i=0;i<4;i++)//blinks for 4 times
      {
        delay(500);//wait 0.5seconds
        digitalWrite(yellowLed, HIGH);//turn on yellow led
        delay(1000);//wait 0.5 seconds
        digitalWrite(yellowLed, LOW);// turn off yellow led
    }        
      for(int i=0;i<7;i++)//blinks for 7 times
      { 
        delay(500);//wait 0.5 seconds
        digitalWrite(redLed, HIGH);// turn on redLed
        delay(1000);//wait 5 seconds   
        digitalWrite(redLed, LOW);// turn off redLed        
    }
      for(int i=0;i<2;i++)//blink 2 times
     {  
        delay(500);
        digitalWrite(greenLed, HIGH);//turn on green led
        digitalWrite(yellowLed, HIGH);// turn on yellow led
        digitalWrite(redLed, HIGH); //turn on red Led
        delay(1000);//wait 1 second
        digitalWrite(greenLed, LOW);//turn on green led
        digitalWrite(yellowLed, LOW);// turn on yellow led
        digitalWrite(redLed, LOW); //turn on red Led 
    }
    for(int i=0;i<10;i++)
    {
      delay(1000);
    digitalWrite(greenLed, HIGH);
    delay(1000);
    digitalWrite(greenLed, LOW);
    }
   {
    exit(0);
    }
    
          
}
