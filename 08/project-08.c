#include <stdio.h>
#include <ctype.h>
#include <string.h>
/*Modify Programming Project 7 so that it prompts for five quiz grades for each of five stu
 dents. then computes the total score and average score for each student, and the average
 score, high score, and low score for each quiz..*/
#define MAX_SIZE 100


int main(void) {
    int student_total = 0;
    int quiz_total = 0;
    int counter = 0;
    int num_array[5][5] = {0};
    int student_grades[0];
    int highest_score = 0;
    int smallest_score = 0;
    float average_score = 0;
    
    for (counter; counter < 5; counter++){
        printf("Enter your grades student%d: ", counter);
    for (int i = 0; i < 5; i++){
        scanf("%d", &num_array[counter][i]);
    }
}
 
    counter = 0;
    printf("\nStudents Total: \n");
    for (counter; counter < 5; counter++){
        student_total = 0;
    for(int i=0; i<5; i++){
        student_total += num_array[counter][i];
        
        }
        average_score = (float)student_total/5;
        printf("Student %d total score: %d \n", counter, student_total);
        printf("Student %d average score: %.2f \n", counter, average_score);
        student_total = 0;
    }
    counter = 0;

    printf("\nQuiz Total: \n");
    
    for (counter; counter < 5; counter++){
        quiz_total = 0;
        int highest_score = num_array[0][counter];  
        int smallest_score = num_array[0][counter];

        for(int i=0; i<5; i++){
        quiz_total += num_array[i][counter];
       if (num_array[i][counter] > highest_score) {
                highest_score = num_array[i][counter];
            }
            if (num_array[i][counter] < smallest_score) {
                smallest_score = num_array[i][counter];
            }
        }
        float quiz_average = (float)quiz_total / 5;
        printf("Quiz %d average score among students is: %.2f\n", counter, quiz_average);
        printf("Quiz %d highest score among students is: %d\n", counter, highest_score);
        printf("Quiz %d lowest score among students is: %d\n", counter, smallest_score);

        quiz_total = 0;
        highest_score = 0; 
    }
}



    
  
    



