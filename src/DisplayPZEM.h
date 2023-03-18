void setBrightness(int _inputBrightness) {
  pzemDisplay.shutdown(0, false);
  pzemDisplay.setIntensity(0, _inputBrightness);
  pzemDisplay.shutdown(1, false);
  pzemDisplay.setIntensity(1, _inputBrightness);
  pzemDisplay.shutdown(2, false);
  pzemDisplay.setIntensity(2, _inputBrightness);
}

void viewVoltage(float _inputVoltage) {
  //DISPLAY TEGANGAN ----------------------------------------------------------
  String tegangan = "";
  tegangan.concat(_inputVoltage);
  String v_dig_1 = tegangan.substring(0, 1);
  String v_dig_2 = tegangan.substring(1, 2);
  String v_dig_3 = tegangan.substring(2, 3);
  String v_dig_4 = tegangan.substring(4, 5);
  int int_v_dig_1 = v_dig_1.toInt();
  int int_v_dig_2 = v_dig_2.toInt();
  int int_v_dig_3 = v_dig_3.toInt();
  int int_v_dig_4 = v_dig_4.toInt();
  // Serial.print("Voltage: ");
  // Serial.print(int_v_dig_1);
  // Serial.print(int_v_dig_2);
  // Serial.print(int_v_dig_3);
  // Serial.print(",");
  // Serial.print(int_v_dig_4);
  // Serial.println("V");
  pzemDisplay.setDigit(0, 0, int_v_dig_3, true);
  pzemDisplay.setDigit(0, 1, int_v_dig_2, false);
  pzemDisplay.setDigit(0, 2, int_v_dig_1, false);
  pzemDisplay.setDigit(0, 3, int_v_dig_4, false);
}

void viewCurrent(float _inputCurrent) {
  //DISPLAY ARUS --------------------------------------------------------------
  String arus = "";
  arus.concat(_inputCurrent);
  String i_dig_1 = arus.substring(0, 1);
  String i_dig_2 = arus.substring(1, 2);
  String i_dig_3 = arus.substring(2, 3);
  String i_dig_4 = arus.substring(3, 4);
  int int_i_dig_1 = i_dig_1.toInt();
  int int_i_dig_2 = i_dig_2.toInt();
  int int_i_dig_3 = i_dig_3.toInt();
  int int_i_dig_4 = i_dig_4.toInt();
  // Serial.print("Current: ");
  // Serial.print(int_i_dig_1);
  // Serial.print(",");
  // Serial.print(int_i_dig_3);
  // Serial.print(int_i_dig_4);
  // Serial.println("A");
  pzemDisplay.setDigit(1, 0, int_i_dig_3, false);
  pzemDisplay.setDigit(1, 1, int_i_dig_1, true);
  pzemDisplay.setDigit(1, 2, 0, false);
  pzemDisplay.setDigit(1, 3, int_i_dig_4, false);
}

void viewPower(float _inputPower) {
  //DISPLAY POWER ------------------------------------------------------------
  String watt = "";
  watt.concat(_inputPower);
  String w_dig_1 = watt.substring(0, 1);
  String w_dig_2 = watt.substring(1, 2);
  String w_dig_3 = watt.substring(2, 3);
  String w_dig_4 = watt.substring(3, 4);
  String w_dig_5 = watt.substring(4, 5);
  int int_w_dig_1 = w_dig_1.toInt();
  int int_w_dig_2 = w_dig_2.toInt();
  int int_w_dig_3 = w_dig_3.toInt();
  int int_w_dig_4 = w_dig_4.toInt();
  int int_w_dig_5 = w_dig_5.toInt();
  if (_inputPower < 10) {
    // Serial.print("Power: ");
    // Serial.print(int_w_dig_1);
    // Serial.print(",");
    // Serial.print(int_w_dig_3);
    // Serial.println("W");
    pzemDisplay.setDigit(0, 4, int_w_dig_1, true);
    pzemDisplay.setDigit(0, 5, 0, false);
    pzemDisplay.setDigit(0, 6, 0, false);
    pzemDisplay.setDigit(0, 7, int_w_dig_3, false);
  }
  if ((_inputPower >= 10) && (_inputPower < 100)) {
    // Serial.print("Power: ");
    // Serial.print(int_w_dig_1);
    // Serial.print(int_w_dig_2);
    // Serial.print(",");
    // Serial.print(int_w_dig_4);
    // Serial.println("W");
    pzemDisplay.setDigit(0, 4, int_w_dig_2, true);
    pzemDisplay.setDigit(0, 5, int_w_dig_1, false);
    pzemDisplay.setDigit(0, 6, 0, false);
    pzemDisplay.setDigit(0, 7, int_w_dig_4, false);
  }
  if ((_inputPower >= 100) && (_inputPower < 1000)) {
    // Serial.print("Power: ");
    // Serial.print(int_w_dig_1);
    // Serial.print(int_w_dig_2);
    // Serial.print(int_w_dig_3);
    // Serial.print(",");
    // Serial.print(int_w_dig_5);
    // Serial.println("W");
    pzemDisplay.setDigit(0, 4, int_w_dig_3, true);
    pzemDisplay.setDigit(0, 5, int_w_dig_2, false);
    pzemDisplay.setDigit(0, 6, int_w_dig_1, false);
    pzemDisplay.setDigit(0, 7, int_w_dig_5, false);
  }
  if (_inputPower >= 1000) {
    // Serial.print("Power: ");
    // Serial.print(int_w_dig_1);
    // Serial.print(int_w_dig_2);
    // Serial.print(int_w_dig_3);
    // Serial.print(int_w_dig_4);
    // Serial.println("W");
    pzemDisplay.setDigit(0, 4, int_w_dig_3, false);
    pzemDisplay.setDigit(0, 5, int_w_dig_2, false);
    pzemDisplay.setDigit(0, 6, int_w_dig_1, false);
    pzemDisplay.setDigit(0, 7, int_w_dig_4, false);
  }
}

void viewEnergy(float _inputEnergy) {
  //DISPLAY KWH ----------------------------------------------------------------
  String kwh = "";
  kwh.concat(_inputEnergy);
  String kwh_dig_1 = kwh.substring(0, 1);
  String kwh_dig_2 = kwh.substring(1, 2);
  String kwh_dig_3 = kwh.substring(2, 3);
  String kwh_dig_4 = kwh.substring(3, 4);
  String kwh_dig_5 = kwh.substring(4, 5);
  String kwh_dig_6 = kwh.substring(5, 6);
  String kwh_dig_7 = kwh.substring(6, 7);
  int int_kwh_dig_1 = kwh_dig_1.toInt();
  int int_kwh_dig_2 = kwh_dig_2.toInt();
  int int_kwh_dig_3 = kwh_dig_3.toInt();
  int int_kwh_dig_4 = kwh_dig_4.toInt();
  int int_kwh_dig_5 = kwh_dig_5.toInt();
  int int_kwh_dig_6 = kwh_dig_6.toInt();
  int int_kwh_dig_7 = kwh_dig_7.toInt();
  if (_inputEnergy < 10) {
    // Serial.print("Energy: ");
    // Serial.print(int_kwh_dig_1);
    // Serial.print(",");
    // Serial.print(int_kwh_dig_3);
    // Serial.print(int_kwh_dig_4);
    // Serial.println("KWh");
    pzemDisplay.setDigit(2, 2, 0, false);
    pzemDisplay.setDigit(2, 3, 0, false);
    pzemDisplay.setDigit(2, 4, 0, false);
    pzemDisplay.setDigit(2, 5, int_kwh_dig_4, false);
    pzemDisplay.setDigit(2, 6, int_kwh_dig_3, false);
    pzemDisplay.setDigit(2, 7, int_kwh_dig_1, true);
  }
  if ((_inputEnergy >= 10) && (_inputEnergy < 100)) {
    // Serial.print("Energy: ");
    // Serial.print(int_kwh_dig_1);
    // Serial.print(int_kwh_dig_2);
    // Serial.print(",");
    // Serial.print(int_kwh_dig_4);
    // Serial.print(int_kwh_dig_5);
    // Serial.println("KWh");
    pzemDisplay.setDigit(2, 2, int_kwh_dig_1, false);
    pzemDisplay.setDigit(2, 3, 0, false);
    pzemDisplay.setDigit(2, 4, 0, false);
    pzemDisplay.setDigit(2, 5, int_kwh_dig_5, false);
    pzemDisplay.setDigit(2, 6, int_kwh_dig_4, false);
    pzemDisplay.setDigit(2, 7, int_kwh_dig_2, true);
  }
  if ((_inputEnergy >= 100) && (_inputEnergy < 1000)) {
    // Serial.print("Energy: ");
    // Serial.print(int_kwh_dig_1);
    // Serial.print(int_kwh_dig_2);
    // Serial.print(int_kwh_dig_3);
    // Serial.print(",");
    // Serial.print(int_kwh_dig_5);
    // Serial.print(int_kwh_dig_6);
    // Serial.println("KWh");
    pzemDisplay.setDigit(2, 2, int_kwh_dig_2, false);
    pzemDisplay.setDigit(2, 3, int_kwh_dig_1, false);
    pzemDisplay.setDigit(2, 4, 0, false);
    pzemDisplay.setDigit(2, 5, int_kwh_dig_6, false);
    pzemDisplay.setDigit(2, 6, int_kwh_dig_5, false);
    pzemDisplay.setDigit(2, 7, int_kwh_dig_3, true);
  }
  if ((_inputEnergy >= 1000) && (_inputEnergy < 10000)) {
    // Serial.print("Energy: ");
    // Serial.print(int_kwh_dig_1);
    // Serial.print(int_kwh_dig_2);
    // Serial.print(int_kwh_dig_3);
    // Serial.print(int_kwh_dig_4);
    // Serial.print(",");
    // Serial.print(int_kwh_dig_6);
    // Serial.print(int_kwh_dig_7);
    // Serial.println("KWh");
    pzemDisplay.setDigit(2, 2, int_kwh_dig_3, false);
    pzemDisplay.setDigit(2, 3, int_kwh_dig_2, false);
    pzemDisplay.setDigit(2, 4, int_kwh_dig_1, false);
    pzemDisplay.setDigit(2, 5, int_kwh_dig_7, false);
    pzemDisplay.setDigit(2, 6, int_kwh_dig_6, false);
    pzemDisplay.setDigit(2, 7, int_kwh_dig_4, true);
  }
}

void viewFrequency(float _inputFrequency) {
  //DISPLAY FREQ --------------------------------
  String freq = "";
  freq.concat(_inputFrequency);
  String freq_dig_1 = freq.substring(0, 1);
  String freq_dig_2 = freq.substring(1, 2);
  int int_freq_dig_1 = freq_dig_1.toInt();
  int int_freq_dig_2 = freq_dig_2.toInt();
  // Serial.print("Frequency: ");
  // Serial.print(int_freq_dig_1);
  // Serial.print(int_freq_dig_2);
  // Serial.println("Hz");
  pzemDisplay.setDigit(2, 0, int_freq_dig_1, false);
  pzemDisplay.setDigit(2, 1, int_freq_dig_2, false);
}

void viewPowerFactor(float _inputPowerFactor) {
  //DISPLAY PF --------------------------------
  String pwrf = "";
  pwrf.concat(_inputPowerFactor);
  String pwrf_dig_1 = pwrf.substring(0, 1);
  String pwrf_dig_2 = pwrf.substring(2, 3);
  String pwrf_dig_3 = pwrf.substring(3, 4);
  int int_pwrf_dig_1 = pwrf_dig_1.toInt();
  int int_pwrf_dig_2 = pwrf_dig_2.toInt();
  int int_pwrf_dig_3 = pwrf_dig_3.toInt();
  // Serial.print("PF: ");
  // Serial.print(int_pwrf_dig_1);
  // Serial.print(",");
  // Serial.print(int_pwrf_dig_2);
  // Serial.println(int_pwrf_dig_3);
  pzemDisplay.setDigit(1, 4, int_pwrf_dig_3, false);
  pzemDisplay.setDigit(1, 5, int_pwrf_dig_2, false);
  pzemDisplay.setDigit(1, 6, int_pwrf_dig_1, true);
}