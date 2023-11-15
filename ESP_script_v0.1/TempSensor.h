//36,39
#define TMP_BOIL_PIN 34
#define TMP_MILK1_PIN 35

void init_Tsensor() {
  pinMode(TMP_BOIL_PIN, INPUT);
  pinMode(TMP_MILK1_PIN, INPUT);
}

int Boil_Temp() {
  int temp = analogRead(TMP_BOIL_PIN) * 100/4095;
  return temp;
}

int Tank1_Temp() {
  int temp = analogRead(TMP_MILK1_PIN) * 100/4095;
  return temp;
}
