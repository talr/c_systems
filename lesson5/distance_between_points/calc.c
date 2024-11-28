#include <math.h> // sqrt(), pow()
#include "point_functions.h"

void calc_distances(float x[], float y[], float distances[]) {
   int i;

   for( i=0; i<NUMBER_OF_POINTS-1; i++) {
        distances[i]=sqrt(pow(x[i]-x[i+1],2) +
            pow(y[i]-y[i+1],2));
   } 
}