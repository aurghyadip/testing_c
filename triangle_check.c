/*
 * C program to check whether a triangle is Equilateral, Isosceles or Scalene
*/
 
#include <stdio.h>
 
int main()
{
    int a, b, c; //a, b, c are three sides of a triangle
 
    /* Reads all sides of a triangle */
    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &a, &b, &c);
 
    if(a==b && b==c) 
    {
        //If all sides are equal
        printf("Equilateral triangle.\n");
    }
    else if(a==b || a==c || b==c) 
    {
        //If two sides are equal
        printf("Isosceles triangle.\n");
    }
    else
    {
        //If none sides are equal
        printf("Scalene triangle.\n");
    }
 
    return 0;
} 
