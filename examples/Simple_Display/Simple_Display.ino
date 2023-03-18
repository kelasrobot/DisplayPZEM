#include <LedControl.h>
LedControl pzemDisplay = LedControl(D5, D7, D6, 3);  //DIN ,CLK, LOAD, JUMLAH IC
#include "DisplayPZEM.h"

#include <PZEM004Tv30.h>
PZEM004Tv30 pzem(D3, D4);

void setup() {
  setBrightness(5);

  viewVoltage(210.5);
  viewCurrent(1.54);
  viewPower(3.10);
  viewEnergy(0.3);
  viewFrequency(49);
  viewPowerFactor(0.35);
}

void loop() {
}
