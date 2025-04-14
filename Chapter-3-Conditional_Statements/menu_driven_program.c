/*
    Problem: Menu-Driven Program Using Switch
    Date: 15 April 2025

    Description:
    This program will display the user some conversion type and will take a number as input from the user to perform the specific conversion and will print the correct conversion
    Display: 
    A menu for a user to select a conversion:
        1. Celsius to Fahrenheit
	    2. Kilometers to Miles
	    3. Exit
    
*/

#include<stdio.h>
int main ()
{
    int num;
    float celc, farnh, killo, mile;
    printf("Select which conversion you want to do: \n");
    printf("1. Celsius to Fahrenheit \n");
    printf("2. Kilometers to Miles \n");
    printf("3. Exit \n");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("Enter the value of temperature in celsius: ");
        scanf("%f", & celc);
        farnh = ((9 * celc) / 5) + 32;
        printf("%f degree celsius is equal to %f degree fahrenheit", celc, farnh);
        break;

    case 2:
        printf("Enter the value of distance in kilometers: ");
        scanf("%f", & killo);
        mile = killo * 0.62;
        printf("%f kilometers is equal to %f miles", killo, mile);
        break;
    
    case 3:
        printf("You exited successfully \n ");
        printf("Thank You! \n ");

    default:
        break;
    }

    return 0;
}