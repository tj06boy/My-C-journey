#include <stdio.h>
int main()
{
    int a,b;

    printf("Enter first number: ");
    scanf("%d",&a);

    printf("Enter second number: ");
    scanf("%d",&b);

    int temp= a;
    a=b;
    b=temp;

    printf("After swap first number is %d and second number is %d\n",a,b);

    return 0;
}