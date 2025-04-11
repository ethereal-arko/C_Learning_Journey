/*
    Problem: Convert Days to Years and Weeks
    Date: 11 April 2025

    Description: 
    This program will take input of the total number of days from the user and will convert it to equivalent in years and weeks
*/

#include<stdio.h>
int main()
{
    float days , years , weeks;
    printf("Enter total days: \n");
    scanf("%f", &days);
    years = days / 365;
    printf("%f days is equvalent to %f years \n", days , years);
    weeks = days / 7;
    printf("%f days is equivalent to %f weeks \n", days , weeks); 
    printf("Thank you for using me!");

    return 0;

}