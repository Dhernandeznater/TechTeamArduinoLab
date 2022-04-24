//double low_e
//double low_d = 146.83
//double low_e = 164.81
double low_f_sharp = 185;
double low_g = 196;
double low_a = 220;
double low_b = 246.94;
double c = 261.63;
double c_sharp = 277.18;
double d = 293.66;
double e = 329.63;
double f_sharp = 369.99;
double g = 392;
double a = 440;
double b = 493.88;

int pin = 3;

// in milliseconds per quarter note (beat)
double extra_delay = 1.05;



double bpm_to_quarter(double bpm) {
  // beats per minute to beats per second
  double bps = bpm/60;
  // beats per second to beats per millisecond
  double bpms = bps/1000;
  // beats per millisecond to milliseconds per quarter note
  double quarter = 1/bpms;
  return quarter;
}

double quarter = bpm_to_quarter(130);
double quarter_dotted = quarter * 1.5;
double eigth = .5 * quarter;


void setup() {
  
}


void melody() {
  // put your main code here, to run repeatedly:
  // Measure 1
  tone(pin, a, quarter_dotted);
  delay(quarter_dotted * extra_delay);
  tone(pin, f_sharp, eigth);
  delay(eigth * extra_delay);
  tone(pin, f_sharp, eigth);
  delay(eigth * extra_delay);
  tone(pin, e, quarter);
  delay(quarter * extra_delay);
  // Tied into next measure
  tone(pin, a, quarter);
  delay(quarter * extra_delay);

  // Measure 2
  tone(pin, f_sharp, quarter);
  delay(quarter * extra_delay);
  tone(pin, f_sharp, eigth);
  delay(eigth * extra_delay);
  tone(pin, f_sharp, quarter);
  delay(quarter * extra_delay);
  tone(pin, e, quarter);
  delay(quarter * extra_delay);

  // Measure 3
  tone(pin, a, quarter_dotted);
  delay(quarter_dotted * extra_delay);
  tone(pin, f_sharp, eigth);
  delay(eigth * extra_delay);
  tone(pin, f_sharp, eigth);
  delay(eigth * extra_delay);
  tone(pin, e, quarter);
  delay(quarter * extra_delay);
  // Tied into next measure
  tone(pin, a, quarter);
  delay(quarter * extra_delay);

  // Measure 4
  tone(pin, f_sharp, quarter);
  delay(quarter * extra_delay);
  tone(pin, f_sharp, eigth);
  delay(eigth * extra_delay);
  tone(pin, f_sharp, quarter);
  delay(quarter * extra_delay);
  tone(pin, g, quarter);
  delay(quarter * extra_delay);

  // Measure 5
  tone(pin, a, quarter_dotted);
  delay(quarter_dotted * extra_delay);
  tone(pin, f_sharp, eigth);
  delay(eigth * extra_delay);
  tone(pin, f_sharp, eigth);
  delay(eigth * extra_delay);
  tone(pin, e, quarter);
  delay(quarter * extra_delay);
  // Tied into next measure
  tone(pin, a, quarter);
  delay(quarter * extra_delay);

  // Measure 6
  tone(pin, f_sharp, quarter);
  delay(quarter * extra_delay);
  tone(pin, f_sharp, eigth);
  delay(eigth * extra_delay);
  tone(pin, f_sharp, quarter);
  delay(quarter * extra_delay);
  tone(pin, e, quarter);
  delay(quarter * extra_delay);

  // Measure 7
  tone(pin, a, quarter_dotted);
  delay(quarter_dotted * extra_delay);
  tone(pin, f_sharp, eigth);
  delay(eigth * extra_delay);
  tone(pin, f_sharp, eigth);
  delay(eigth * extra_delay);
  tone(pin, e, quarter);
  delay(quarter * extra_delay);
  // Tied into next measure
  tone(pin, a, quarter);
  delay(quarter * extra_delay);

  // Measure 8
  delay(quarter * extra_delay);
  delay(eigth * extra_delay);
  tone(pin, f_sharp, quarter);
  delay(quarter * extra_delay);
  tone(pin, g, quarter);
  delay(quarter * extra_delay);
}

void bday() {
  
}

void loop() {
  melody();
}
