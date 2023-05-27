#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include "CTBot.h"
#include <SimpleDHT.h>

CTBot myBot;

const char *ssid = "Kochengimoet";      // silakan disesuaikan sendiri
const char *password = "gratisanterus"; // silakan disesuaikan sendiri
String token = "5426893950:AAG5DZKvBkA--7kb6G4_2fRv9sPxjEzKdkM";
const int id = 1163749622;

const char *mqtt_server = ""; // isikan server broker

#define Board "Arduino"
#define Voltage_Resolution 5
#define sensorMQ2 A0          // Analog input 0 of your arduino
#define type "MQ-2"           // MQ2
#define ADC_Bit_Resolution 10 // For arduino UNO/MEGA/NANO
#define RatioMQ4CleanAir 9.83 // RS / R0 = 9.83 ppm

#define RED_LED D5   // led warna merah
#define GREEN_LED D6 // led warna hijau
#define BLUE_LED D7  // led warnah biru
#define buzzer D3

// MQUnifiedsensor MQ2(Board, Voltage_Resolution, ADC_Bit_Resolution, sensorMQ2, type);
LiquidCrystal_I2C lcd(0x27, 16, 2);

WiFiClient espClient;
PubSubClient client(espClient);
SimpleDHT11 dht11(D0);

long now = millis();
long lastMeasure = 0;
String macAddress = "";

int gas;

void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}