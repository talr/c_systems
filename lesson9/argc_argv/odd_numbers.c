#include <stdio.h>
#include <stdlib.h>

#define NO_PARAMETERS 1
#define NO_PARAMETERS_RC -1

int main( int argc, char *argv[]) {
    int counter=0;
    if (argc==NO_PARAMETERS) {
        fprintf( stderr, "\n You must write numbers in command line.\n");
        exit(NO_PARAMETERS_RC);
    }

    // Loop while there is no null in the current argv
    while (*++argv) {
        
    }
}