#include <Arduino.h>

#ifdef __cplusplus
extern "C" {
#endif

// void experiment_a_asm(unsigned int *rptr);

// extern void this_here();

void this_here();

#ifdef __cplusplus
}
#endif

void trapped() {
  // void this_here() {
  this_here();
  while(-1);
}

void setup() {
  // Serial.begin(9600);
  // pinMode(LED_BUILTIN, OUTPUT);
  trapped();
}

void loop() {
  ;
}

// END.
