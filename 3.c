//3. Write a C program to check whether a given year is Leap year or not
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Your code starts here
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                printf("Leap year\n");
            }
            else{
                printf("Not a leap year\n");
            }
        }
        else{
            printf("Leap year\n");
        }
    }
    else{
        printf("Not a leap year\n");
    }
    return 0;
}