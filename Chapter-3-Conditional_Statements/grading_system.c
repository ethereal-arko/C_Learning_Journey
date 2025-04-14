/*
    Problem: Grading System
    Date: 15 April 2025

    Description: 
    Creating a grading system based on this where, 
    90–100 → A 
    80–89 → B 
    70–79 → C 
    60–69 → D 
    < 60 → F 
    This program will take the user's input of the student's number and will find out the equal grade.
*/

#include<stdio.h>
int main ()
{
    int num;
    printf("Enter the student's marks: ");
    scanf("%d", &num);
    if (num >= 90 && num <= 100){
        printf("Grade: A");
    }
    else if(num >= 80 && num <= 89){
        printf("Grade: B");
    }
    else if(num >= 70 && num <= 79){
        printf("Grade: C");
    }
    else if(num >= 60 && num <= 69){
        printf("Grade: D");
    }
    else if(num < 60){
        printf("Grade: F");
    }
    else{
        printf("Wrong Input");
    }
    return 0;
}