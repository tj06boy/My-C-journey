#include <stdio.h>
int main()
{
    int num,digit, temp, rev=0;
    
    printf("Enter a number: ");
    scanf("%d",&num);

    temp= num;


    while (num!=0)
    {
        digit= num%10;
        rev= (rev*10)+digit;
        num= num/10;
    }

    printf("Reverse of %d is %d.\n",temp,rev);   
}