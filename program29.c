//add two time durations
#include <stdio.h>

typedef struct {
    int hours;
    int minutes;
    int seconds;
} TimeDuration;

TimeDuration addTimeDurations(TimeDuration t1, TimeDuration t2) {
    TimeDuration result;
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60);
    result.hours = t1.hours + t2.hours + (result.minutes / 60);
    result.seconds %= 60;
    result.minutes %= 60;
    return result;
}

int main() {
    TimeDuration t1 = {1, 30, 45};
    TimeDuration t2 = {2, 15, 30};
    TimeDuration sum = addTimeDurations(t1, t2);
    printf("Sum: %d:%d:%d\n", sum.hours, sum.minutes, sum.seconds);
    return 0;
}