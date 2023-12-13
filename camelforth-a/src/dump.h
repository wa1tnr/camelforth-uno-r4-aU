// dump.h

/* Charley Shatttuck's rdumps() */

/* Tiny interpreter,
   similar to myforth's Standalone Interpreter
   This example code is in the public domain */

/* dump 16 bytes of RAM in hex with ascii on the side */

void d_three_sp(void) {         // print three spaces
    for (int i = 3; i > 0; i--) {
        putch('\040');
    }
}

void d_two_sp(void) {
    putch('\040');
    putch('\040');
}

char buffer[64];
void putLine(char* buffer);

void dumpRAM() {

    char lbuffer[64];

    char *ram;
    int p = psp[0];
    psp++;
    ram = (char *) p;
    // printf("\n%4X: ", p);
    snprintf(lbuffer, sizeof(lbuffer), "\n%4X: ", (uint32_t) p, '\0');
    memcpy(buffer, lbuffer, sizeof(buffer));
    putLine(buffer);
}
// end.
