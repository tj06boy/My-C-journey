#include <stdio.h>
#include <math.h>

int is_prime(int num)
{
    if (num<=1)
    return 0;

    for (int i=2; i <= sqrt(num); i++)
    {
    if (num % i ==0)
    return 0;
    }
    return 1;
}

int main()
{
    int start, end;

    printf ("Enter starting number: ");
    scanf("%d",&start);

    printf ("Enter ending number: ");
    scanf("%d",&end);

    for(int i= start; i<=end; i++)
    {
        if (is_prime(i))
        printf("%d\n",i);
    }
    return 0;
}