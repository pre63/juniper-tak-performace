void loop() {
  int n = millis();
  int res = tak(18, 12, 6);
  int t = millis() - n;

  Serial.print("res:   ");
  Serial.println(res);

  Serial.print("start: ");
  Serial.println(n);

  Serial.print("diff:  ");
  Serial.println(t);
  Serial.println("done");
  delay(1000);
}

int tak(int x, int y, int z) {
  if (y < x) {
    return tak(tak(x - 1, y, z), tak(y - 1, z, x), tak(z - 1, x, y));
  }
  return z;
}
