/*
    Problem: Simple Calculator
    Date: 11 April 2025

    Description: 
    This program will take input of two float numbers from the user and will perform basic arithmetic operation
    ( addition , substraction, multiplication , division )
*/

#include<stdio.h>
int main()
{
    float num1 , num2 ;
    printf("Enter a float number: \n");
    scanf("%f", &num1);
    printf("Enter another float number: \n");
    scanf("%f", &num2);
    printf("Addition of two numbers is %f\n" , num1+num2);
    printf("Substraction of two numbers is %f \n" , num1-num2);
    printf("Multiplication of two numbers is %f \n" , num1*num2);
    printf("Division of two numbers is %f \n " , num1/num2);
    printf("Thank you for using me!");

    return 0;

}