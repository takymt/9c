#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define PI 3.1415
#define HALF_CIRCLE_DEGREE 180

double radian(double arc) {
    return arc * PI / HALF_CIRCLE_DEGREE;
}

int main(void) {
    int n1 = -20, n2 = 2, n3 = 40;

    printf("abs(n1) = %d\n", abs(n1));
    printf("pow(n1, n2) = %.5f\n", pow(n1, n2));
    printf("sqrt(n2) = %.5f\n", sqrt(n2));
    printf("tan(n3) = %.5f\n", tan(radian(n3)));

    return 0;
}