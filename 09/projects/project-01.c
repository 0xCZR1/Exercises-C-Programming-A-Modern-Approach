/*
 Write a program that asks the user to enter a series of integers (which it stores in an array),
 then sorts the integers by calling the function selection_sort. When given an array
 with n elements, selection - sort must do the followine *~:
 1. Search the array to find the largestelemenl. then move it to the last position in the array.
 2. Call itself recursively to sort the first n - 1 elements ofthe array.
*/

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
    
    for (int j = 0; j < n; j++){
        selection_sort(array, n - j, n);
    }
    

    return 0;

    

}

void selection_sort(int array[], int size, int original_s){
    int largest = 0;
    int largest_index = 0;
    int value_at_last_index = 0;

    for (int k=0; k < size; k++ )
        printf("%d", array[k]);


    printf("Searching the largest number: ");
    for (int k=0; k < size; k++ ){
        if (array[k] > largest) {
        
            largest = array[k];
            largest_index = k;
        }
    }

    printf("Found the largest number: %d\n", largest);
   
    value_at_last_index = array[size-1]; //Assign the n-1 value to the var.
    array[size-1] = array[largest_index]; //Swap the n-1 value to the largest value by it's index
    array[largest_index] = value_at_last_index; //Assign back to the largest value's index the previous last value
            
        

    printf("Printing the sorted list:\n ");
    for (int k =0; k < original_s; k++){
        printf("%d", array[k]);

    }
    printf("\n");
   
}
