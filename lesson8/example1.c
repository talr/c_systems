// 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str;

    /* Initial memory allocation */
    str = (char *)mallac(15);
    strcpy(str, "tutorialspoint");
    printf("String = %s,  Address = %u\n", str, str);

    /* Reallocating memory */
    str = (char *)realloc(str, 25);
    strcat(str, ".com");
    printf("String = %s,  Address = %u\n", str, str);

    free(str);

    return 0;

}

// Challanges
// 1. We used Magic Numbers we should replace them with const or #define
// 2. We used str twice in realloc, and we might lose the point to the original string
// 3. We assumed happy path and we didn't check for error handing (i.e. malloc, realloc) 
