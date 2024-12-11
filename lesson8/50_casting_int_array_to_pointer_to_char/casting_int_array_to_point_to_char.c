void main(void) {
    int a[5]={10, 20, 30, 40, 50};
    char *p;
    // We changed the Magic number into size(a)
    for (p=(char*)a; p<(char*)a+sizeof(a), p=(char*)((int*)p+1))
        printf("%d", *((int*)p));
}