int red_led = 11;
int green_led = 10;
int blue_led = 9;

void setup() {
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
}

void loop() {
  // Red color
  led_color(255, 0, 0);
  delay(1000);
  // Green color
  led_color(0, 255, 0);
  delay(1000);
  // Blue color
  led_color(0, 0, 255);
  delay(1000);
}

void led_color(int red_value, int green_value, int blue_value) {
  analogWrite(red_led, red_value);
  analogWrite(green_led, green_value);
  analogWrite(blue_led, blue_value);
}
