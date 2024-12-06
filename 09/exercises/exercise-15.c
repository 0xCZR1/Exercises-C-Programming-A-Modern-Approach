#include <stdio.h>

double median(double x, double y, double z);

int main(void) {
    double my_med = median(42, 88, 22);
    printf("%f", my_med);
}

double median(double x, double y, double z) {

    double highest = 0;
    double lowest = x;
    double x_y_z[3] = {x, y, z};
    double sum = x + y + z;

    for (int i = 0 ; i < 3; i++) {
        if (x_y_z[i] > highest)
            highest = x_y_z[i];
        if (x_y_z[i] <= lowest)
            lowest = x_y_z[i];        
    }
    return sum - highest - lowest;

}
