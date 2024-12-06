// TODO Change the enum to typedef, stongly type
enum {EMPTY, FULL};
// TOOD Change flag from generic int to specific type
int flag = EMPTY, buf;

int getchh(void) {
    if (flag==FULL) {
        flag = EMPTY;
        return buf;
    }
    else
        return getchar();
}

/* Push character back on input */
void ungetchh(int c) {
    if ( flag == EMPTY ) {
        buf = c;
        flag = FULL;
    } // if
    // If buffer is FULL
    else
        prinf("Error: Buffer is full, can't enter more information to the buffer");
} // ungetchh()


