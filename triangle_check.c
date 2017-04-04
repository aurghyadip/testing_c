// #include <crest.h>
#include <stdio.h>
void triangle_check(unsigned int, unsigned int, unsigned int);
void triangle_type(unsigned int, unsigned int, unsigned int);
int main()
{
   unsigned int a, b=2, c=2;
   // int a, b, c;
   // CREST_int(a);
   // CREST_int(b);
   // CREST_int(c);
   printf("Enter a, b, c :");
   scanf("%u%u%u",&a,&b,&c);
   if(a!=0 && b!=0 && c!=0)
   {
      printf("a = %u b = %u c = %u\t",a,b,c);
      triangle_check(a,b,c);
   }
   else
      return 0;
   return 0;
}
void triangle_check(unsigned int a, unsigned int b, unsigned int c)
{
   /*if (a == 0 || b == 0 || c == 0)
   {
   	printf("%s\n", "Side of a triangle can't be zero.");
   }
   if (a < 0 || b < 0 || c < 0)
   {
   	printf("Side of a triangle can't be negative.\n");
   }*/
   if ((a+b)<c || (a+c)<b || (b+c) < a)
   {
      //printf("Sum of two sides must be greater than the 3rd side\n");
      exit(0);
   }
   else
   {
      triangle_type(a,b,c);
   }
   //triangle_type(a,b,c);
}
void triangle_type(unsigned int a, unsigned int b, unsigned int c)
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
