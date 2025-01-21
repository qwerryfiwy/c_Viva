//Write a C program to convert a given integer (in seconds) to hours, minutes, and seconds.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Your code starts here
    int seconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    seconds = seconds % 3600;
    int minutes = seconds / 60;
    seconds = seconds % 60;
    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n", hours, minutes, seconds);
    return 0;
}