int val; //переменная в которую записывается сигнал через bluetooth
int Relay_1 = 7; // порт D7;
/* Предварительная загрузка выполняется 1 раз только при включении */
void setup(){
  Serial.begin(9600); // запуск работы со скоростью 9600 бит/с
  pinMode(Relay_1, OUTPUT); //обозначаем, что Reley_1, это порт вывода
  Serial.println("Press 1 to ON or 0 to OFF");
} /* Конец предварительной загрузки*/
void loop(){
  if (Serial.available()){// Прием данных из буфера 
    val = Serial.read(); // Присваеваем переменной val, то что пришло в порт из bluetooth
    if (val == '1'){  // Если пришла единица, то включаем свет командо digitalWrite со вторым параметром HIGH
      digitalWrite(Relay_1, HIGH);
      Serial.println("Relay — ON");//Вывод сообщения в bluetooth терминале о том, что свет включен 
    }
    if ( val == '0'){// Если пришел ноль, то выключаем свет той же командой только со вторым аргументом LOW
      digitalWrite(Relay_1, LOW);
      Serial.println("Relay — OFF");// Вывод сообщения в bluetooth терминале о том, что свет выключен
    }
  }
}
