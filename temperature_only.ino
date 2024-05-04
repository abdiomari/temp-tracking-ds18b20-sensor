#include <OneWire.h>
#include <DallasTemperature.h>

#define SENSOR_PIN 2

OneWire oneWire(SENSOR_PIN);
DallasTemperature DS18B20(&oneWire);

float temperature_C;
float temperature_F;


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 DS18B20.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
    DS18B20.requestTemperatures();
    temperature_C = DS18B20.getTempCByIndex(0);
    temperature_F = temperature_C * 9 /5 + 32;

    Serial.print("Temperature: ");
    Serial.print(temperature_C);
    Serial.print("°C");
    Serial.print("  ~  ");
    Serial.print(temperature_F);
    Serial.print("°F\n");

    delay(500);
}
