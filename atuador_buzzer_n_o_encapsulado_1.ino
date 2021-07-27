void setup(){
  pinMode(3, OUTPUT);
  digitalWrite(3, LOW);
}

void loop(){
  tone(3, 395.50); delay(500); noTone(3);
  tone(3, 444.00); delay(500); noTone(3);
  tone(3, 528.00); delay(300); noTone(3);
  tone(3, 444.00); delay(250); noTone(3);
  tone(3, 498.40); delay(450); noTone(3);
  tone(3, 392.42); delay(300); noTone(3);
  tone(3, 498.00); delay(250); noTone(3);
  tone(3, 528.00); delay(500); noTone(3);
  delay(1000);
}