#include <stdio.h>

struct bitf3 {
    unsigned int a:3; // 2^2=4 2^1=2 2^0=1 011
    unsigned int b:2;
} b3;

struct bitf1 {
    unsigned int a:3;
    unsigned int b:2;
    unsigned int c:30; // Next int
} b1;

struct bitf2 {
    unsigned int a:3;
    unsigned int :0;
    unsigned int b:2;
} b2;

int main() {
    unsigned int *p1= (unsigned int *)(&b1);

    b3.a=9; // 2^2=4 2^1=2 2^0=1 1001 -> 3 bit
    printf("\n b3.a=%d b3.b=%d\n", b3.a, b3.b);

    b1.a=2;
    printf("\n b1=%d %d", *p1, *(p1+1));

    b1.c=3;
    printf("\n b1=%d %d", *p1, *(p1+1));

    printf("\n size of unsigned int %d", sizeof(unsigned int));
    print(" sizeof b1=%d\n", sizeof(sizeof(b1));
    print(" sizeof b2=%d\n", sizeof(sizeof(b2));
    print(" sizeof b3=%d\n", sizeof(sizeof(b3));
    
    return 0;
}