/* Thu 14 Dec 13:56:23 UTC 2023 */
#include <Arduino.h>

#ifdef __cplusplus
extern "C" {
#endif

void interpreter(void);

char getch(void) {
  bool waiting_ch = 0;
  for (int testing = 5; testing > 0; testing--) {
    ;
  }
  while (!waiting_ch) {
    waiting_ch = Serial.available();
  }
  if (waiting_ch) {
    char ch = Serial.read();
    return ch;
  }
}

void putLine(char *buffer) { Serial.print(buffer); }

void putch(char c) {
  Serial.print(c);
  return; // doesn't have to do anything
}

// HOOK // int getquery(void) { return (0 != 0); }

#ifdef __cplusplus
}
#endif

void trapped() {
  Serial.println("\n  Entering CamelForth from 'trapped()':\n");
  delay(40);
  interpreter();
  Serial.println("stale print");
  while (-1)
    ;
}

void setup_serial() {
  Serial.begin(115200);
  while (!Serial)
    ;
}

void setup_gpio() { pinMode(13, OUTPUT); }

void setup() {
  setup_serial();
  setup_gpio();

  delay(800);
  Serial.write(' ');
  /*
      Serial.println(" Camelforth in C");
  */
  // make it harder to delete the above comment ;)
  trapped();
}

void loop() { ; }

// END.
