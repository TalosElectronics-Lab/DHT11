/*
 *  Taloselectronics
 *  soporte@taloselectronics.com 
 *  Rafael Lozano Rolón
*/

#include "DHT.h"
#define DHTPIN 2 // Pin donde está conectado el sensor
#define DHTTYPE DHT11

DHT dht(DHTPIN, DHTTYPE);

void setup()
{
    Serial.begin(9600);
    Serial.println("Iniciando...");
    dht.begin();
}
void loop()
{
    delay(2000);                               //Espera 2 sgundos antes de realizar una medición
    float humedad = dht.readHumidity();        //Leemos la Humedad
    float temperatura = dht.readTemperature(); //Leemos la temperatura en grados Celsius

    Serial.print("Humedad ");
    Serial.print(humedad);
    Serial.print(" %t");
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.println(" *C ");
}