#include <pitches.h>

int tuut = 1;
int i = 1;
int ruis = 1;
int ruisfrequenz = 1;

void duduuu() {
  tone(8, 250);
  delay(100);
  tone(8,375);
  delay(150);
  noTone(8);
  delay(500);
}
void laden() {
  for (tuut = 1; tuut < random(2,50); tuut++) {
    tone(8, 690);
    delay(25);
    tone(8, 750);
    delay(25);
  }
  tone(8, 150);
  delay(random(250,800)); 
}
void ruisenshit () {
  for (i = 1; i<10; i++) {
    laden();
  }
  noTone(8);
  for (ruisfrequenz = 1; ruisfrequenz<6; ruisfrequenz++) {
    for (ruis = 1; ruis<40; ruis++) {
    digitalWrite(8,random(2));
    delay(ruisfrequenz);
    }
  }
  for (ruis = 1; ruis<30000; ruis++) {
    digitalWrite(8,random(2));
  }
  for (ruis = 1; ruis<5000; ruis++) {
    digitalWrite(8,random(2));
    delayMicroseconds(500);
  }
  digitalWrite(8, LOW);
  delay(100);
}
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


void startup() {
  duduuu();
  laden();
  ruisenshit();
  deuntje();
}