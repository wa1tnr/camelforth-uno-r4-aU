/* Sun  2 Jul 16:18:33 UTC 2023 */
#include <Arduino.h>

#ifdef __cplusplus
extern "C" {
#endif

// void experiment_a_asm(unsigned int *rptr);

// extern void this_here();

void this_here();
void interpreter(void);

/*
char getch(void);
void putch(char c);
int getquery(void);
*/


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
    // printf("%c", c);
    Serial.print(c);

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
  // this_here_now();
  // this_here_now();

  interpreter();

  Serial.println("");
  Serial.println("");
  Serial.println(" Calling code found in:"); Serial.println("");
  Serial.println("");
  Serial.println("     camelforth-esp32-aU/camelforth-a/n_sk_camelforth.cpp");
  Serial.println("");
  Serial.println("");
  Serial.println(" hey guess what: someone asked for 'BYE' and you got it: (endless loop)");
  while(-1);
}

void blynque() {
    for (int count = 3; count > 0; count--) {
        digitalWrite(13, 1);
        delay(1000);
        digitalWrite(13, 0);
        delay(1000);
        delay(1000);
    }
}

void setup() {
  Serial.begin(115200);
  while(!Serial);
  pinMode(13, OUTPUT); blynque(); delay(800);
  Serial.write(' ');
  Serial.println("\n\n Camelforth in C");

/*
  for (int count = 3; count > 0; count--) {
    digitalWrite(15, 1);
    delay(90);
    digitalWrite(15, 0);
    delay(700);
  }
*/

  // this_here_now();

  // pinMode(LED_BUILTIN, OUTPUT);


  trapped();
}

void loop() {
  ;
}

// END.
