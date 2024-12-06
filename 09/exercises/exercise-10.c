
/*
Write functions that retum the following values. (Assume that a and n are parameters,
 where a is an array of in t values and n is the length of the array.)
 (a) The largest element in a.
 (b) The average of all elements in a.
 (c) The number of positive elements in a
 */

#include <stdio.h>

int largest(int a[], int n);
int average(int a[], int n);
int positive(int a[], int n);

int main(void) {

    int array1[10] = {1, 2, -23, 4, 5, 6, 7, 8, 9, 10};

    int largest_n = largest(array1,  10);
    int average_n = average(array1, 10);
    int positive_n = positive(array1, 10);

    printf("largest: %d\n average: %d\n positive: %d\n", largest_n, average_n, positive_n);

}

int largest(int a[], int n) {

    int largest = 0;
    for (int i = 0; i < n; i ++) {
        if ( a[i] > largest )
            largest = a[i];
    }
    return largest;
}

int average(int a[], int n) {

    int average = 0;
    int sum = 0;
    for (int i = 0; i < n ; i++) {
        sum += a[i];
    }

    average = sum / n;
    return average;
}

int positive(int a[], int n) {

    int positive_elements = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            positive_elements += 1;
        }

    }
    return positive_elements;

}

