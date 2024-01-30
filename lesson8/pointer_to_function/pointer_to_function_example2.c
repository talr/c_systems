// 7

#include <stdio.h>

int ArrSample(int [], int, int, int(*)(int, int));

int f1(int, int);
int f2(int, int);
int f3(int, int);
int f4(int, int);

int main(void) {
    int myArr[5] = {1, 2, 3, 4, 5};
    printf("\nresult with f1 : %d", ArrSample(myArr, 5, 0, f1));
    printf("\nresult with f2 : %d", ArrSample(myArr, 5, 0, f2));
    printf("\nresult with f3 : %d", ArrSample(myArr, 5, 1, f3));
    printf("\nresult with f4 : %d", ArrSample(myArr, 5, 0, f4));
    return 0;
}

int ArrSample(int arr[], int n, int acc, int (*func)(int, int)) {
    int i;
    for (i=0; i<n; i++) {
        acc = func(acc, arr[i]);
    }
    return acc;
}

int f1(int a, int b) {
    return a+b;
}
int f2(int a, int b) {
    return a+b*b;
}
int f3(int a, int b) {
    return a*b;
}
int f4(int a, int b) {
    return a+(b%2);
}
