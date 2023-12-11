/* Sun  2 Jul 16:18:33 UTC 2023 */
#include <Arduino.h>

#ifdef __cplusplus
extern "C" {
#endif

void this_here();
void interpreter(void);

extern void this_here_now();

char getch(void) {
//  this_here_now();
    bool waiting_ch = 0;

    for (int testing = 5; testing > 0; testing--) {
      ;
    }

    while (!waiting_ch) {
      waiting_ch = Serial.available();
      // this_here_now(); // loop
    }

    if (waiting_ch) {
      char ch = Serial.read();
      return ch;
    }
}

void putch(char c) {
    Serial.write(c);
    // printf("%c", c);

    return ;  // doesn't have to do anything
}


int getquery(void) {
    // return(UARTCharsAvail(UART0_BASE) != 0);
    return(0 != 0);
}

#ifdef __cplusplus
}
#endif

void trapped() {
  this_here_now();
  this_here_now();

  interpreter();

  while(-1);
}

#define THIS_LED_BDEF 31

void setup() {
  Serial.begin(115200);
  Serial.write(' ');
  Serial.println("\n\n Camelforth in C");
  Serial.println("\n\nWed  5 Jul 19:51:14 UTC 2023 - for black pill 411CE on Serial A9 A10\n\n");
  pinMode(THIS_LED_BDEF, OUTPUT);

  for (int count = 3; count > 0; count--) {
    digitalWrite(THIS_LED_BDEF, 0);
    delay(90);
    digitalWrite(THIS_LED_BDEF, 1);
    delay(700);
  }
  trapped();
}

void loop() {
  ;
}

// END.
