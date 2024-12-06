#include "stack.h"

int sp=0;
double val[MAXINUM_VALUES_IN_STACK];

void push(double value) {
    // If Stack is not full
    if(sp<MAXVAL)
        val[sp++]=value;
    // Stack is full
    else
        printf("Error: Stack full, can't push%4f.\n", value);
} // push()

double pop() {
    // If stack not empty
    if (sp>0)
        return val[--sp];
    else
        printf("Error: Can't pop() from empty stack\n");
    // Do not use Magic Numbers - DEFAULT NUMBER IF POP FROM EMPTY STACK
    return 0.0;
} // pop()

