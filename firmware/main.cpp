#include "Particle.h"
#include "boilerplate.h"

void setup()
{
    // Put initialization code here to run once

    pinMode(D7, OUTPUT);

    Serial.begin(115200);

    Particle.connect();
}

void loop()
{
    // Put code here to loop forever

    if (!Particle.connected())
    {
        digitalWrite(D7, !digitalRead(D7));
        softDelay(100);
    }
    else
    {
        digitalWrite(D7, !digitalRead(D7));
        softDelay(500);
    }
}
