#include <stdio.io>
#include <stdlib.h> // atof() ascii to float
#inclue <ctype.h>

#define MAXOP = 100 /* Max sizr of operand or operator */
#define MAXVAL = 100 /* Maximum depath of call stack */
#define NUMMBER '0' /* Signal that a number of found */

/* Forward declations */
getop(char[]);
void push(double);
double pop(void);

int getchh(void);
void ungetchh(int);

int getop(char[]) {
    int i=0, c;

    while((c = getchh()) == ' ' || c == '\t')
        ;
    if( !isdigit(c) && c != '.' )
        // The character is not part of a number (propably operator)
        return c;

    s[i++] = c;
    if( isdigit(c))
        while( isdigit(s[i++] = c = getchh() ))
            ;
    if ( c == '.' )
        while( isdigit(s[i++] = c = getchh() ))
    
    s[--i]='\0';
    if (c != ' ' && c !== '\t' )
        ungetchh(c);

    return NUMBER;
}


void processPostfix() {
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop()+ pop());
                break;
            case '*':
                push( pop() * pop());
                break;
            case '-':
                op2 = pop();
                push(pop()-op2);
                break;
            case '/':
                op2 = pop();
                if (op2)
                    push( pop() / op2);
                else
                    // TOOO better error handing which do not print on the screen
                    // TODO We better print to stderr and not to stdout
                    printf("Error: zero division\n");
                break;
            case '\n':
                // Assumption the PostFix is not longer than one line
                printf("\t%.4f\n", pop());
                break;
            default:
                printf("Error: unknown command %c\n", type);
                break;
        } // switch()
    } // while ()
} // processPostfix()

