/*
    Problem: Print the average of 3 numbers
    Date: 12 April 2025

    Description: 
    This program will input a number from the user and will find the average value.
*/
#include<stdio.h>
int main()
{
    float num1, num2 , num3;
    float sum, avg;
    printf("Enter number-1:\n");
    scanf("%f", &num1);
    printf("You have entered number-1: %f \n", num1);
    printf("Now enter number-2: \n");
    scanf("%f", &num2);
    printf("Amazing! You have entered number-1: %f and number-2: %f \n", num1 , num2);
    printf("Now enter number-3: \n");
    scanf("%f", &num3);
    sum = num1 + num2 + num3;
    avg = sum/3;
    printf("You have entered number-1: %f and number-2: %f number-3: %f \n", num1 , num2, num3);
    printf("The average value of the three numbers is %f ", avg);
    return 0;
}