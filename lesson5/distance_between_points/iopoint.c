#include <stdio.h> // scanf(), printf()
#include "point_functions.h"

void get_points(float Xs[], float Ys[]) {
    int i;

    printf("\n insert %d points\m", NUMBER_OF_POINTS);
    for(i=0; i<NUMBER_OF_POINTS; i++) {
        scanf("%f%f", &Xs[i], &Ys[i]);
    } // for
} // get_points()

void print_distances(float distances[]) {
    int i;

    printf("\n The distances are:\n");
    for (i=0; i<NUMBER_OF_POINTS-1; i++) {
        printf("%f\n", distances[i]);
    } // for
} // print_distances()