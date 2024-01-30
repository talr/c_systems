// 2
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int *)malloc(4*sizeof(int));
    int *q;
    q = (int *)realloc(p, 6*sizeof(int));
    if (!q) {
        printf("Memory not allocated\n");
        exit(0);
    }
    p=q;
}


// Challanges
// 1. We better use calloc and not malloc in case we do multipling *
// 2. We need to free all memory allocated, even that the operting system will free all memory allocated when the process finished
// 3. Error handing not only on the realloc but also on the malloc
// 4. If we have error we should print it to stderr and not to stdout. For example using fprintf(stderr, "Error message\n");
// 5. The main should return a value in the end
// 6. In case of error it is recommended to return a unique negative value from const or #define
