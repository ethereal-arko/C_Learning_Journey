/*
    Problem: Day of the Week (Using Switch Operator)
    Date: 15 April 2025

    Description:
    This program will take the user's input which is a number from 1 to 7 and will find out the the corresponding day name.
    1 - Friday
    2 - Saturday
    3 - Sunday
    4 - Monday
    5 - Tuesday
    6 - Wednesday
    7 - Thursday
*/

#include<stdio.h>
int main ()
{
    int num1;
    printf("Enter a number from (1-7): ");
    scanf("%d", &num1);
    switch (num1)
    {
    case 1:
        printf("It is Friday");
        break;
    case 2:
        printf("It is Saturday");
        break;
    case 3:
        printf("It is Sunday");
        break;
    case 4:
        printf("It is Monday");
        break;
    case 5:
        printf("It is Tuesday");
        break;
    case 6:
        printf("It is Wednesday");
        break;
    case 7:
        printf("It is Thursday");
        break;
    default:
        break;
    }

    return 0;
}