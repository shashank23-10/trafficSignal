#define ledRed 12 
#define ledYellow 10 
#define ledGreen 8 

void setup(){
    pinMode(ledRed, OUTPUT);
        pinMode(ledYellow, OUTPUT);
        pinMode(ledGreen, OUTPUT);
}

void loop(){
    digitalWrite(ledRed, HIGH);
        delay(10000);
      digitalWrite(ledRed, LOW);
        digitalWrite(ledYellow, HIGH);
        delay(8000);
      digitalWrite(ledYellow, LOW);
        digitalWrite(ledGreen, HIGH);
        delay(10000);
      digitalWrite(ledGreen, LOW);
}
