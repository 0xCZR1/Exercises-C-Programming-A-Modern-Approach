#include <stdio.h>
#include <stdlib.h>
/*Write a program that asks the user to enter a time
 (expressed in hours and minutes, using the 24-hour clock).
  The program then displays the departure and arrival times for the
   flight whose departure time is closest to that entered by the user:
Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
Hint: Convert the input into a time expressed in minutes since midnight,
 and compare it to the departure times, also expressed in minutes since midnight.
  For example, 13:15 is 13 * 60 + 15 = 795 minutes since midnight,
   which is closer to 12:47 p.m. (767 minutes since midnight) than to any of the other departure times.*/


int main(void) {

    int user_time_hour, user_time_minute, closest_time, arrival_time,
        min_difference = 24 * 60,
        closest_index = 0,
        departure_times[] = {120, 280, 360, 480, 500, 550, 600, 820},
        arrival_times[] = {180, 340, 400, 520, 540, 590, 640, 860};


    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &user_time_hour, &user_time_minute);

    int convertor = (user_time_hour * 60 + user_time_minute);

    for (int i = 0; i < sizeof(departure_times)/sizeof(departure_times[0]); i++){
        int difference = abs(convertor - departure_times[i]);
        if(difference < min_difference) {
            min_difference = difference;
            closest_index = i;
        }
    }

        closest_time = departure_times[closest_index];
        arrival_time = arrival_times[closest_index];

printf("Closest departure time is %d:%02d %s, arriving at %d:%02d %s",
       ((closest_time / 60) % 12) ? ((closest_time / 60) % 12) : 12,  
       (closest_time % 60),                                            
       (closest_time >= 12 * 60) ? "p.m." : "a.m.",                   
       ((arrival_time / 60) % 12) ? ((arrival_time / 60) % 12) : 12,
       (arrival_time % 60),
       (arrival_time >= 12 * 60) ? "p.m." : "a.m.");


}
