/*
    Problem: Swap Two Numbers (without using a third variable)
    Date: 12 April 2025


    Description: 
    This program will input two numbers from the user and will swap them without using a third variable.
*/
#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter an integer number:\n");
    scanf("%d", &num1);
    printf("Enter another integer number:\n");
    scanf("%d", &num2);
    printf("Enterned number-1 is %d and number-2 is %d\n", num1, num2);
    num1 = num1 + num2;  // now num1 holds sum of num1 and num2
    num2 = num1 - num2;  // subtract num2 from sum to get original num1
    num1 = num1 - num2;  // subtract new num2 from sum to get original num2
    printf("After swaping number-1 is %d and number-2 is %d\n", num1, num2);

    return 0;
}