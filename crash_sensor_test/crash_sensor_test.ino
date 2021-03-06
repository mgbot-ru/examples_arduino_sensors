/*
  Пример работы с датчиком столкновения
  Created by Rostislav Varzar
*/

#define SENSPIN 12

void setup() {
  // Инициализация последовательного порта
  Serial.begin(9600);
  // Инициализация входа цифрового датчика
  pinMode(SENSPIN, INPUT);
}

void loop() {
  // Измерение
  int sensor_data = digitalRead(SENSPIN);
  // Вывод измеренных значений
  Serial.println("Crash sensor: " + String(sensor_data));
  delay(100);
}
