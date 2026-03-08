# temp-tracking-ds18b20-sensor — Accurate Temperature Measurement using the ds18b20 Sensor

## Overview
This Arduino Sketch is designed to measure temperature using the ds18b20 sensor, providing a reliable and accurate temperature reading solution for various applications. The project aims to demonstrate the simplicity and effectiveness of using the ds18b20 sensor with Arduino for temperature tracking.

## Tech Stack
* C++ (Primary Language)
* Arduino Framework

## Features
* Temperature measurement using the ds18b20 sensor
* Real-time temperature display
* Simple and easy-to-use interface for temperature tracking
* Compatible with various Arduino boards
* Accurate temperature readings with minimal error margin

## Screenshots
> 📸 Screenshots coming soon. Run the project locally to see it in action.

## Setup & Installation
1. Clone the repository using Git:
```bash
git clone https://github.com/abdiomari/temp-tracking-ds18b20-sensor.git
```
2. Install the required Arduino libraries:
```bash
cd temp-tracking-ds18b20-sensor
```
```bash
arduino-cli lib install Wire
arduino-cli lib install DallasTemperature
```
3. Configure the Arduino board and port in the `temperature_only.ino` file:
```c
// Set the Arduino board and port
#define BOARD "Arduino Uno"
#define PORT "/dev/ttyACM0"
```
4. Upload the sketch to the Arduino board:
```bash
arduino-cli upload -p /dev/ttyACM0 temperature_only.ino
```
5. Run the project:
```bash
arduino-cli monitor -p /dev/ttyACM0
```
Note: Make sure to replace `/dev/ttyACM0` with the actual port of your Arduino board.