/**
 * C program to print all armstrong numbers between a given range
 */
  
#include <stdio.h>
 
/* Function declarations */
int isArmstrong(int num);
void printArmstrong(int start, int end);
 
 
 
int main()
{
    int start, end;
     
    /* Reads lowe and upper limit to of armstrong numbers */
    printf("Enter lower limit to print armstrong numbers: ");
    scanf("%d", &start);
    printf("Enter upper limit to print armstrong numbers: ");
    scanf("%d", &end);
     
    printf("All armstrong numbers between %d to %d are: \n", start, end);
    printArmstrong(start, end);
     
    return 0;
}
 
 
 
/**
 * Checks whether the given number is armstrong number or not.
 * Returns 1 if the number is armstrong otherwise 0.
 */
int isArmstrong(int num)
{
    int temp, lastDigit, sum;
     
    temp = num;
    sum = 0;
     
    /* Finds sum of cube of digits */
    while(temp != 0)
    {
        lastDigit = temp % 10;
        sum += lastDigit * lastDigit * lastDigit;
        temp /= 10;
    }
     
    /* Checks if sum of cube of digits equals
     * to original number.
     */
    if(num == sum)
        return 1;
    else
        return 0;
}
 
 
 
/**
 * Prints all armstrong numbers between start and end. 
 */
void printArmstrong(int start, int end)
{
    /* Iterates from start to end and print the current number 
     * if it is armstrong
     */
    while(start <= end)
    {
        if(isArmstrong(start)) 
        {
            printf("%d, ", start);
        }
         
        start++;
    }
}