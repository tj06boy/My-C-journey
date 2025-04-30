#include <stdio.h>
#include <math.h>
int main()
{
    int i,num, is_prime= 1;

    printf("Enter a number: ");
    scanf("%d",&num);

    if (num <= 1) {
    printf("%d is not a prime number.\n", num);
    return 0;
    }

    for (i=2;i<=sqrt(num);i++)
    {
        if (num%i==0)
        is_prime= 0;
    }
    
    if (is_prime==1)
    printf("%d is a prime\n", num);

    else
    printf("%d is not a prime\n", num);

}