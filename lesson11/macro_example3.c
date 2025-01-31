#include <stdio.h>

#define m1(a) #a

#define check(a, n, r) \
{\
    int i;\
    r=0;\
    for(i=0; i<n; i++)\
        if((m(a[i]))\
        {\
            print("\n %d \n", a[i]);\
            r++;\
        }\
}

#define m(n) (n)%2==0

int main() {
    int b[]={10, 15, 20, 25, 35};
    int result;
    int i;

    printf(m1(m(5)));
    for(i=0; i<5; i++)
        printf("\n %d\n", b[i]);

    check(b, 5, result)

    printf("\n %d even numbers", result);
}