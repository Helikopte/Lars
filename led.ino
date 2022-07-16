int led = 7;
void setup()
{
pinMode(led, output);// set pin 7 as a output
}
void loop()
{
    digitalWrite(led, HIGH);//turn on the led
    delay(1000)//the lsd is turned on for 1 sec
    digitalWrite(led, LOW);//turn off thr led
    delay(500)//Turn off the led for 0.5 sec

}