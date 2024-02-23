#include <pitches.h>

void deuntje() {
  tone(8, NOTE_A4);
  delay(250);
  tone(8, NOTE_E4);
  delay(75);
  noTone(8);
  delay(75);
  tone(8, NOTE_E4);
  delay(75);
  noTone(8);
  delay(75);
  tone(8, NOTE_FS4);
  delay(250);
  tone(8, NOTE_E4);
  delay(125);
  noTone(8);
  delay(400);
  tone(8, NOTE_GS4);
  delay(300);
  tone(8, NOTE_A4);
  delay(150);
  noTone(8);
  delay(125);
}