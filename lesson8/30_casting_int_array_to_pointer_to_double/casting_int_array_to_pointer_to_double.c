void main(void) {
    int a[5]={10, 20, 30, 40, 50};
    double *p;
    for (p=(double*)a; p< (double*)(a+5), p=(double*)((int*)p+1))
        printf("%d", *((int*)p));
}