#include "lib1.h"

int led1 = D7; // led 1 = D7 set 
SYSTEM_THREAD(ENABLED);

{
  pinMode(led1, OUTPUT);
}

void loop()  // loop for blinking "SAM" in argon particle
{

    //Morse code for "S"
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(500);    
    digitalWrite(led1,LOW);
    delay(1000);

    
    //Morse code for "A"
    
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);	   
    delay(1000);				
    digitalWrite(led1, LOW);	  
    delay(1000);
    
    //Morse code for "M"
    
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
    digitalWrite(led1, HIGH);
    delay(1000);
    digitalWrite(led1, LOW);
    delay(1000);
    //END
    
    digitalWrite(led1,LOW);
    delay(5000);
    
    // And repeat!

}
