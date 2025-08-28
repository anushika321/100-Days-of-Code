//Write a program to input three numbers and find the largest among them using if else.
#include<stdio.h>
int main()
{
    //a, b, c - Input numbers, largest - Largest number
    int a, b, c, largest;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    printf("Enter the third number:\n");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    printf("Largest number = %d\n", largest);
    return 0;
}