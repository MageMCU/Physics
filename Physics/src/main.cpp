#include <Arduino.h>

#include "Rigidbody.h"

void setup()
{
    Serial.begin(9600);
    while (!Serial)
    {
        /* code */
    }
    Serial.println("Hello Rigidbody...");
}

void loop()
{
}