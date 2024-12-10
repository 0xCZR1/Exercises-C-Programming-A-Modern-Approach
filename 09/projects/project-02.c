#include <stdio.h>

float compute_tax(float income);

float compute_tax(float amount_earned) {
  
    float tax = 0;

        if (amount_earned < 750) {
        tax = (1/100) * amount_earned;
    }
    
    else if (amount_earned > 750 && amount_earned < 2250) {
        tax = ((0.02) * (amount_earned - 750)) + 7.50;
    }

    else if (amount_earned > 2250 && amount_earned < 3750) {
        tax = ((0.03) * (amount_earned - 2250)) + 37.50;
    }

    else if (amount_earned > 3750 && amount_earned < 5250) {
        tax = ((0.04) * (amount_earned - 3750)) + 82.50;
    }

    else if (amount_earned > 5250 && amount_earned < 7000) {
        tax = ((0.05) * (amount_earned - 5250)) + 142.50;
    }

    else if (amount_earned > 7000) {
        tax = ((0.06) * (amount_earned - 700)) + 230.00;
    }

    return tax;
}


int main(void) {
    float amount_earned = 0;

    printf("Enter the amount earned, tax payer: ");
    scanf("%f", &amount_earned);

    printf("%2f", compute_tax(amount_earned));
}
