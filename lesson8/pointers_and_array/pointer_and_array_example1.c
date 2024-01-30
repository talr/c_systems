// 4

int m[3][2]={{1,2},{3,4},{5,6}};

// 1, 2, 3, 4, 5, 6

// m is (int **)

// m
// m+1
// m+2

int *p;

for(p=(int *)m; p<((int*)m)+6; p++)
    printf("%d\n", *p);

