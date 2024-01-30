// 3
int *f() {
    int a[3] = {10, 20, 30};
    // code
    return a;
}

// Allocation in the stack, when we exit the function f() this memory is not allocated to us

int *g_alloc() {
    int *a;
    a=(int *)malloc(3*sizeof(int));
    a[0]=10;
    a[1]=20;
    a[2]=30;
    return a;
}

// Allocation in the heap, when we exit the function g() this memory is allocated to us and we can continue using it

void g_free(int *x) {
    free(x);
}


int main() {
    int *z = g_alloc();
    // Not recommended
    free(z);
    // Recommended
    g_free(z);
}
// I recommand you to keep the software symetric, meaning if we have function which allocates memory on the heap,
//   not to free the memory in the calling function but to free the memory and "sister" function.
