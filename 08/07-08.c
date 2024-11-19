#include <stdio.h>
#define MONTH_DAYS 30
#define DAY_HOURS 24

int main(void) {
   
    int temperature_readings[MONTH_DAYS][DAY_HOURS] = {0};
    int total_temp = 0;
    float average_temp;
    
    for (int i = 0; i < MONTH_DAYS; i++) {
        for (int j = 0; j < DAY_HOURS; j++) {
            
            temperature_readings[i][j] = i + j;  
            total_temp += temperature_readings[i][j];
        }
    }
    
  
    average_temp = (float)total_temp / (MONTH_DAYS * DAY_HOURS);
    
    printf("Average monthly temperature: %.2f\n", average_temp);
    
    return 0;
}
