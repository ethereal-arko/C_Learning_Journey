/*
    Problem: Check if a number is odd or even
    Date: 12 April 2025

    Description: 
    This program will input a number from the user and will find if the number is even or odd.
    Even numbers do not have a reminder on the other hand odd numbers have a reminder.
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
        printf("%d is even", num );    
    }
    else{
        printf("%d is odd");
    }
    return 0;
}