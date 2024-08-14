#include <Mouse.h>

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  Mouse.begin();

  randomSeed(analogRead(0));
}

byte shift = 1;
int max_wait_seconds = 240;

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  Mouse.move(shift, 0, 0);
  delay(200);
  Mouse.move(-shift, 0, 0);
  digitalWrite(LED_BUILTIN, LOW);

  delay((max_wait_seconds - random(3, 200))*1000);
}
