// int buttons[6];
// set up an array with 6 integers
// int buttons[0] = 2;
// give the first element of the array the value 2
int notes[] = {262,294,330,349};
void setup() {
   Serial.begin(9600);
}
void loop(){
int keyVal = analogRead(A0);
Serial.println(keyVal);
if(keyVal == 1023){
    tone(8, notes[0]);
}
    else if(keyVal >= 990 && keyVal<=1010){
        tone(8, notes[1]);
    }
    else if (keyVal>=690 && keyVal<=695){
        tone(8, notes[2]);
    }
    else if(keyVal >= 505 && keyVal <=515){
        tone(8, notes[3]);
    }
    else if(keyVal >= 5 && keyVal <=10){
        tone(8, notes[4]);
    }
    else{
        noTone(8);
    }
}
