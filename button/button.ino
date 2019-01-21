/*
Arduino Button Lab

In this lab, you will be using DigitalWrite() in order to turn on and off your LED based on a button input.

*/

// define 'buttonPin' and 'ledPin' to be constant integers with a pin number
const int buttonPin = 2;
const int ledPin = 13;

// define an integer 'state' (which is NOT constant) that will hold the current state of the button
int state = 0;

void setup() {
    // set the pin mode of 'buttonPin' as INPUT
    pinMode(buttonPin, INPUT);

    // set the pin mode of 'ledPin' as OUTPUT
    pinMode(ledPin, OUTPUT);

    // begin serial communication
    Serial.begin(9600);
}

void loop() {
    // update the 'state' variable with a digitalRead of the button
    state = digitalRead(buttonPin);
    
    Serial.println(state); //print out the state of the button
    
    // use a conditional to check whether the state is HIGH, then digitalWrite HIGH to the ledPin
    // otherwise, set the digitalWrite to the ledPin to LOW
    if (state == HIGH) {
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
    }

}


