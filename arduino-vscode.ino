int switchState = 0;
void setup()
{
 pinMode(3, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(5, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(2, INPUT);
}
void loop()
{
switchState = digitalRead(2);
if(switchState == LOW) {
//the button is not presssed
digitalWrite(3, HIGH);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);

}
else{  
    digitalWrite(3, LOW);  
    digitalWrite(6, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
    //toggle the LED
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    delay(250);
    digitalWrite(3, HIGH);
    delay(250);
    digitalWrite(3, LOW);
}
}