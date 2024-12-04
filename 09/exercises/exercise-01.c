#include <stdio.h>
#define MAX_LENGTH 80
double triangle_area(double, double);

int main(void) {

    double area = triangle_area(3.0, 4.0);
    printf("%f", area);
    return 0;
}

double triangle_area(double height, double base){
    double product;
    product = height * base;

    return product / 2;   
}
