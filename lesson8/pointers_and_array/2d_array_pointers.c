// 5
int **p;
int k;

p=(int **)malloc(3*sizeof(int *));
for(k=0;k<3;k++) {
    p[k]=(int *)malloc((4*sizeof(int));
}


p=(int **)malloc(3*sizeof(int *));
for(k=0;k<3;k++) {
    p[k]=(int *)malloc((k+1)*sizeof(int));
}

p[1][2]=8;
// second row, 3rd column
*(p[1]+2)=8;
(*(p+1))[2]=8;
*(*(p+1)+2)=8;
