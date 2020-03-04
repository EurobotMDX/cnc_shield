
const int stepY = 3;

const int dirY  = 6;

const int enPin = 8;


void setup() {

  pinMode(stepY,OUTPUT);
  pinMode(dirY,OUTPUT);
  pinMode(enPin,OUTPUT);
  
  digitalWrite(enPin,LOW);

}

void loop() {


   digitalWrite(dirY,HIGH);


   for(int x = 0; x < 1200; x++) {

    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);

  }
   delay(1000); // One second delay
   digitalWrite(dirY,LOW);


  
   for(int x = 0; x < 1200; x++) {

    digitalWrite(stepY,LOW);

    delayMicroseconds(1000);

    digitalWrite(stepY,HIGH);

    delayMicroseconds(1000);

  }

  delay(1000); // One second delay
// add the N stop on the top to abort the task and reset counting steps


}
