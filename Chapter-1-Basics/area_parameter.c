/*
    Problem: Calculate the Area and Perimeter
    Date: 11 April 2025

    Description: 
    This program will take inputs of the sides of the square, radius of the circle, and side of the cube from the user and
    will find the area and perimeter of the square, circle, and cube
*/

#include<stdio.h>
int main()
{
    float side_of_square , square_area , square_perimeter;
    printf("Enter the side of a square: \n");
    scanf("%f", &side_of_square);
    square_area = side_of_square * side_of_square;
    square_perimeter = side_of_square * 4;
    printf("Area of the square: %f \n", square_area);
    printf("Perimeter of the square: %f \n", square_perimeter);

    float radius_of_circle , circle_area , circle_perimeter;
    printf("Enter the radius of a circle: \n");
    scanf("%f", &radius_of_circle);
    circle_area = 3.1416 * radius_of_circle * radius_of_circle;
    circle_perimeter = 2 * 3.1416 * radius_of_circle;
    printf("Area of the circle: %f \n", circle_area);
    printf("Perimeter of the circle: %f \n", circle_perimeter);

    float side_of_cube, cube_perimeter, cube_area;
    printf("Enter the side of a cube: \n");
    scanf("%f", &side_of_cube);
    cube_area = side_of_cube * 3;
    cube_perimeter = 12 * side_of_cube;
    printf("Area of the cube: %f \n", cube_area);
    printf("Perimeter of the cube: %f \n", cube_perimeter);

    return 0;
}