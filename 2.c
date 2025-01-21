//2. Write a C program to check whether a triangle is Equilateral, scalene, or isosceles
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Your code starts here
    int a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    b=a-b;
    c=a-c;
    if (b==0 && c==0)
    {
        printf("Equilateral Triangle\n");
    }
    else if (b!=0 && c!=0)
    {
        printf("Scalene Triangle\n");
    }
    else
    {
        printf("Isosceles Triangle\n");
    }
    return 0;
}