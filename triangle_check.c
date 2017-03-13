#include <crest.h>
#include <stdio.h>

void triangle_check(int, int, int);
void triangle_type(int, int, int);

int main()
{
  int a, b, c;
  CREST_int(a);
  CREST_int(b);
  CREST_int(c);
  triangle_check(a,b,c);
  return 0;
}

void triangle_check(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		printf("%s\n", "Not a valid traingle");
	}
	else
	{
		if ((a+b)>c || (a+c)>b || (b+c) > a)
      triangle_type(a,b,c);
	  else
      printf("Not a valid triangle!\n");
	}
}

void triangle_type(int a, int b, int c)
{
  if(a==b && b==c)
  {
    printf("a = %d\nb = %d\nc = %d\n",a,b,c);
    printf("Equilateral triangle.\n");
  }
  else if(a==b || a==c || b==c)
  {
    printf("a = %d\nb = %d\nc = %d\n",a,b,c);
    printf("Isosceles triangle.\n");
  }
  else
  {
    printf("a = %d\nb = %d\nc = %d\n",a,b,c);
    printf("Scalene triangle.\n");
  }
}
