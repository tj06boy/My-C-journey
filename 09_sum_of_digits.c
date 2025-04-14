#include <stdio.h>
int main()
{
    int num,digit, temp, sum=0;
    
    printf("Enter a number: ");
    scanf("%d",&num);

    temp= num;


    while (num!=0)
    {
        digit= num%10;
        sum= sum+digit;
        num= num/10;
    }

    printf("Sum of the digit of %d is %d.\n",temp,sum);   
}