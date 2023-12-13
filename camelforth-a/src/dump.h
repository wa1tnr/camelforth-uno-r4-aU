void d_three_sp(void) { for (int i = 3; i > 0; i--) { putch('\040'); } }
void d_two_sp(void) { putch('\040'); putch('\040'); }
char buffer[64]; void putLine(char* buffer);
void dumpRAM() {
    char lbuffer[64];
    char *ram;
    int p = psp[0];
    psp++;
    ram = (char *) p;
    // printf("\n%4X: ", p);
    snprintf(lbuffer, sizeof(lbuffer), "%4X: ", // removed a newline
                (uint32_t) p, '\0');
    memcpy(buffer, lbuffer, sizeof(buffer)); putLine(buffer);
    int count = -1;
    for (int i = 0; i < 16; i++) {
        count++; if (i == 8) putch('\040');
        if (count > 3) { count = (count & 0x03); putch('\040'); }
        char c = *ram++;
        snprintf(lbuffer, sizeof(lbuffer), " %02X", (c & 0xff), '\0');
        memcpy(buffer, lbuffer, sizeof(buffer)); putLine(buffer);
    } ram = (char *) p;
    d_two_sp(); // d_three_sp();
    for (int i = 0; i < 16; i++) {
        buffer[0] = (uint32_t) * ram++;
        if (buffer[0] > 0x7e || buffer[0] < ' ')
            buffer[0] = (uint32_t) '.';
        buffer[1] = '\0';
        snprintf(lbuffer, sizeof(lbuffer), "%s%c", // maybe a newline
              buffer, '\0');
        memcpy(buffer, lbuffer, sizeof(buffer)); putLine(buffer);
    }
    putch(0x0d);
    snprintf(lbuffer, sizeof(lbuffer), "%c", '\0');
    memcpy(buffer, lbuffer, sizeof(buffer)); putLine(buffer);
    psp--;
    psp[0] = p + 16;
    putch(0x0d);
    putch(0x0a);
}

/* dump 256 bytes of RAM */
CODE(dump) {                    /* adr n -- */
    int j = psp[0];
    psp++;
    for (int i = 0; i < j; i++) {
        dumpRAM();
    }
}
