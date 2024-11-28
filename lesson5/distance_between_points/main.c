#include "point_functions.h"

int main() {
    float Xs[NUMBER_OF_POINTS];
    float Ys[NUMBER_OF_POINTS];
    float distances[NUMBER_OF_POINTS-1];

    get_points(Xs, Ys);
    calculate_distances(Xs, Ys, distances);
    print_distances(distances);

    return 0;
}