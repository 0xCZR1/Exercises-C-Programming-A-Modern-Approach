
/*
 Write the following function:
 double inner_product(double a [], double b [], int n);
 The functionshould return [0] * b [0 ] 4^a[l] * b [l] + ...+ a [n-l] * b [n-l]
 */

#include <stdio.h>

double inner_product(double a[], double b[], int n);



int main(void) {

    double a_array[10] = {22, 31, 34, 1, 2, 3, 4, 5, 6};
    double b_array[10] = {11, 22, 31, 2, 3, 4, 4, 1 ,2};

    double inner_product_sum = inner_product(a_array, b_array, 10);

    printf("%f", inner_product_sum);
    
}

double inner_product(double a[], double b[], int n) {

    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += (a[i] * b[i]);
    } 

    return sum;

}

