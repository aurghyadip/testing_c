/*
 * C program to check whether a triangle is Equilateral, Isosceles or Scalene
*/
 
#include <stdio.h>

void triangleCheck(int a, int b, int c)
{
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
}