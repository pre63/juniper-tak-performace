#include "memoryfree/memoryfree.h";
#include "memoryfree/memoryfree.cpp";

void setup()
{
  Serial.println("setup");
}

void loop()
{
  int n = millis();
  int res = tak(18, 12, 6);
  int t = millis() - n;

  Serial.print("TIME            : ");
  Serial.println(t);

  Serial.print(F("RAM used (bytes): "));
  Serial.println(freeMemory()*-1, DEC);

  Serial.println("----------------------");
}

int tak(int x, int y, int z)
{
  if (y < x)
  {
    return tak(tak(x - 1, y, z), tak(y - 1, z, x), tak(z - 1, x, y));
  }
  return z;
}
