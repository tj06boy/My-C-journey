#include <stdio.h>
int main()
{
    int a,b,a1,b1,temp;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    a1=a;
    b1=b;

    while(b!=0)
    {
        temp= b;
        b=a%b;
        a=temp;
    }
    printf("GCD of %d and %d is %d\n", a1,b1,a);
    
    return 0;
}