#include <stdio.h>
#include <stdlib.h>
void triangle_check(int, int, int);
void triangle_type(int, int, int);
int main()
{
   int a, b=2, c=2;
   printf("Enter a, b, c :");
   scanf("%d%d%d",&a,&b,&c);
   if(a!=0 && b!=0 && c!=0)
   {
      printf("a = %d b = %d c = %d\t",a,b,c);
      triangle_check(a,b,c);
   }
   else
      return 0;
   return 0;
}
void triangle_check(int a, int b, int c)
{
   if (a == 0 || b == 0 || c == 0)
   {
   	printf("%s\n", "Side of a triangle can't be zero.");
   }
   if (a < 0 || b < 0 || c < 0)
   {
   	printf("Side of a triangle can't be negative.\n");
   }
   if ((a+b)<c || (a+c)<b || (b+c) < a)
   {
      printf("Sum of two sides must be greater than the 3rd side\n");
   }
   else
   {
      triangle_type(a,b,c);
   }
}
void triangle_type(int a, int b, int c)
{
   if(a==b && b==c)
   {
      printf("Equilateral triangle.\n");
   }
   else if(a==b || a==c || b==c)
   {
      printf("Isosceles triangle.\n");
   }
   else
   {
      printf("Scalene triangle.\n");
   }
}
