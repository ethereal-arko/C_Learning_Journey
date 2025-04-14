/*
    Problem: Find a character that is in upper case or not
    Date: 15 April 2025

    Description:
    This program will take a character as input from the user and will find out is it in upper case or not

    
*/

#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
            printf("%c is in upper case.", ch);
    }
    else{
        printf("%c is in lower case." , ch);
    }
    return 0;
}