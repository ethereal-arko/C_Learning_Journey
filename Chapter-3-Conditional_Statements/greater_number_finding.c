/*
    Problem: Finding Max of Two Numbers (Using Ternary Operator)
    Date: 15 April 2025

    Description:
    This program will take the user's input and will find out the greater number among them.
*/

#include<stdio.h>
int main ()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    (num1>num2)? printf("%d is greater than %d", num1, num2) : printf("%d is greater than %d", num2, num1);
    return 0;
}