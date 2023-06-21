#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTimeDifference(struct Time startTime, struct Time endTime, struct Time *diffTime) {
    int totalSeconds1, totalSeconds2, diffSeconds;

    totalSeconds1 = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    totalSeconds2 = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;

    diffSeconds = totalSeconds2 - totalSeconds1;

    diffTime->hours = diffSeconds / 3600;
    diffTime->minutes = (diffSeconds % 3600) / 60;
    diffTime->seconds = (diffSeconds % 3600) % 60;
}

int main() {
    struct Time startTime, endTime, diffTime;

    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    getTimeDifference(startTime, endTime, &diffTime);

    printf("Time difference: %d hours %d minutes %d seconds\n", diffTime.hours, diffTime.minutes, diffTime.seconds);

    return 0;
}
