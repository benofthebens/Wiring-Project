#include <stdio.h>
#include <wiringPi.h>

void toggle(int state, int pin) {
        switch (state) {
            case HIGH:
                digitalWrite(pin, LOW); 
                break;
            case LOW:
                digitalWrite(pin, HIGH);
                break; 
        }
}

void blink(int pin) {
    while(TRUE) {
        int state = digitalRead(pin);
        toggle(state, pin);
        delay(500);
    }
}


int main(void) {
    wiringPiSetupGpio();
    const int PIN = 17;
    pinMode(PIN, OUTPUT);
    blink(PIN);
    return 0;
}