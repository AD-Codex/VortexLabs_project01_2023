
#define BUTTON_ST_PIN 33
#define BUTTON_EN_PIN 25
#define BUTTON_BK_PIN 26
#define BUTTON_UP_PIN 27
#define BUTTON_DN_PIN 14

#define BUZZER_PIN 32
#define LED_OUT1_PIN 12
#define LED_OUT2_PIN 13

void init_hmi() {
  pinMode(BUTTON_ST_PIN, INPUT);

  pinMode(LED_OUT1_PIN, OUTPUT);
  pinMode(LED_OUT2_PIN, OUTPUT);

  digitalWrite(LED_OUT1_PIN, LOW);
  digitalWrite(LED_OUT2_PIN, LOW);  
  
}

void led_set(int num, bool state){
  if (num == 1) {
    digitalWrite(LED_OUT1_PIN, state);
  }
  else if (num == 2) {
    digitalWrite(LED_OUT2_PIN, state);
  }
}
