/*
    Problem: Leap Year Checker
    Date: 15 April 2025

    Description:
    This program will take a year as input from the user and will find out the corresponding year is leap year or not.
	1. A leap year is divisible by 4
    2. But if it's not divisible by 100, it must be divisible by 400  
    
*/

#include<stdio.h>
int main ()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("%d is a leap year.", year);
    }
    else{
        printf("%d is not a leap year." , year);
    }
    return 0;
}