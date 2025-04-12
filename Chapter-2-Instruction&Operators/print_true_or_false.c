/*
    Problem: Print True if a number is greater than 9 & less than 100
    Date: 12 April 2025

    Description: 
    This program will input a number from the user and will print True if the number is greater than 9 & less than 100. Otherwise it will print false.
*/
#include<stdio.h>
int main()
{
    float num1;
    printf("Enter a number:\n");
    scanf("%f", &num1);
    printf("You have entered number: %f \n", num1);
    if(num1 > 9 && num1 < 100){
        printf("True. The number %f is greater than 9 & less than 100", num1);
    }
    if(num1 < 9){
        printf("False. The number %f is not greater than 9", num1);
    }
    if(num1 > 100){
        printf("False. The number %f is not less than 100", num1);
    }

    return 0;
}