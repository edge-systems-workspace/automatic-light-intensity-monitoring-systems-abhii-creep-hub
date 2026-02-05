#include <Arduino.h>
#define ldrPin A0

void setup() {
// write your initialization code here
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
    int ldrValue = analogRead(ldrPin);
    Serial.print("LDR Test: ");
    Serial.println(ldrValue);
}

void loop() {
// write your code here
    int ldrValue = analogRead(ldrPin);
    int lightPercentage = map(ldrValue, 0, 1023, 0, 100);
    Serial.print("Light Intensity: ");
    Serial.print(lightPercentage);
    Serial.println("%");
    delay(1000);

}
