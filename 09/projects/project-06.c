#include <stdio.h>

float compute_fct(int x);

int main(void) {
    printf("Enter a number to compute the polynomial: ");

    int variable = 0;
    scanf("%d", &variable);
    printf("%f", compute_fct(variable));
}

float compute_fct(int x){

    double fifth_power = 1;
    double forth_power = 1;
    double third_power = 1;
    double square_power = 1;
    

    double result_1 = 1;
    double result_2 = 1;
    double result_3 = 1;

    //5th
    for (int i = 0; i < 5; i++){
        fifth_power *= x;
    }
    result_1 = 3* fifth_power;

    //4th
    for (int i = 0; i < 4; i++){
        forth_power *= x;
    }

    result_2 = 2 * forth_power;

    //3th
    for (int i = 0; i < 3; i++){
        third_power *= x;
    }
    result_3 = 5 * third_power;

    //2th
    for (int i = 0; i < 2; i++){
        square_power *= x;
    }

    double no_power = 7 * x;
    return result_1 + result_2 - result_3 - square_power + no_power - 6;

}
