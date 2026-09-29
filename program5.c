//convert Sec in Mins and Hours

#include <stdio.h>

int main() {
    int seconds, minutes, hours;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    seconds = (seconds % 3600) % 60;
    printf("The time is: %d hours, %d minutes, and %d seconds\n", hours, minutes, seconds);
    return 0;
}