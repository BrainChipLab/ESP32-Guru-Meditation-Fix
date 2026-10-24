volatile bool pressed = false;
void IRAM_ATTR onButton() { pressed = true; }
void setup() { Serial.begin(115200); pinMode(4, INPUT_PULLUP); attachInterrupt(4, onButton, FALLING); }
void loop() { if (pressed) { pressed = false; Serial.println("Button!"); } }
