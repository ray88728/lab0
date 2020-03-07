#include "mbed.h"


DigitalOut redLED(LED_RED);

DigitalOut greenLED(LED_GREEN);


int Ledgreen(DigitalOut& ledpin);
int Ledred(DigitalOut& ledpin);


int main()

{

   redLED = 1;

   greenLED = 1;

   while (true) {

       Ledred(redLED);

       Ledgreen(greenLED);

   }

}