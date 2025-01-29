#include <stdio.h>

#define message(a,b) \
    printf("message from:" #a " to " #b "\n");

#define tokenprn(n) \
    printf("token" #n " = %d\n", token##n);


int main() {
    int token50 = 190;

    message(Bob, Alice)
    // printf(“message from:” “Bob” “to” “Alice” “\n”);

    tokenprn(50)
    // printf(“token50 = %d\n”, token50);
    // Token50 = 190

    return 0;
}