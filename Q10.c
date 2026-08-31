// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main(){

    int total_seconds;
    int hours;
    int minutes;
    int seconds;
    int remaining;

    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;

    remaining = total_seconds % 3600;

    minutes = remaining / 60;

    seconds = remaining % 60;

    printf("Time = %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
