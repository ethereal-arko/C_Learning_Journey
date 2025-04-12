/*
    Problem: Check if a number is divisible by 2 or not
    Date: 12 April 2025

    Description: 
    This program will input a number from the user and will find if the number is divisible by 2 or not by using the modulo operator.
*/
#include<stdio.h>
int main()
{
    int num;
    int div;
    printf("Enter an integer number:\n");
    scanf("%d", &num);
    div = num % 2;
    if ( div == 0){
        printf("%d is  divisible by 2", num );
    }
    else{
        printf("%d is not divible by 2");
    }
    return 0;
}