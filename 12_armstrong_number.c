#include <stdio.h>
int main()
{
    int num, digit, temp, product, sum= 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp= num;

    while (num!=0)
    {
        digit= num%10;
        product= digit*digit*digit;
        sum= sum+product;
        num= num/10;
    }

    if(sum==temp)
    {
        printf("%d is an Armstrong.\n");
    }
    else
    {
        printf("%d is not an Armstrong.\n");
    }
}