#include <stdio.h>

void selection_sort(int int_arr[], int size, int original_s);

int main(void) {

    int array[10];
    const int SZ = (int)(sizeof(array)/sizeof(array[0]));
    int n = 0;
    int num = 0;

    printf("Enter the integers (type 0 to end): ");
    
        while (n < SZ && scanf("%d", &num) == 1) {
            if (num == 0)
                break;

            array[n] = num;
            n++;
        }
    selection_sort(array, n, n);

    printf("Printing the sorted list: ");
    for (int k =0; k < n; k++){
        printf("%d", array[k]);

    }
    return 0;
}

void selection_sort(int array[], int size, int original_s){

    if (size <= 1) {
        return;
    }

    int largest = array[0];
    int largest_index = 0;
    
    for (int k=0; k < size; k++ ){
        if (array[k] > largest) {
        
            largest = array[k];
            largest_index = k;
        }
    }

    int value_at_last_index = array[size-1]; //Assign the n-1 value to the var.
    array[size-1] = array[largest_index]; //Swap the n-1 value to the largest value by it's index
    array[largest_index] = value_at_last_index; //Assign back to the largest value's index the previous last value

    selection_sort(array, size - 1, original_s);

}
