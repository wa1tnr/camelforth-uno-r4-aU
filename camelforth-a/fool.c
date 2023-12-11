/* Sun  2 Jul 16:18:33 UTC 2023 */
#define THIS_LED 31

int state = 1 ;

void toggle_LED(int pinNumber) {
  state = !state;
  digitalWrite(pinNumber, state);
}

void slowest() {
  for (volatile int iter = 9800; iter > 1; iter--) {
    ;
  }
}

void slower() {
  for (volatile int repeating = 25;
    repeating > 0; repeating--) {
      slowest();
  }
}

void this_here_now() {
  toggle_LED(THIS_LED);
  slower();
  toggle_LED(THIS_LED);
  for (int off_to_on_ratio = 7; off_to_on_ratio > 1; off_to_on_ratio--) {
    slower();
  }
  int test = 0;
  for (test = 22; test > 0; test--) {
    ;
  }
}

void this_here() {
  while(-1) {
    this_here_now(); // loop
  }
}
/* end */
