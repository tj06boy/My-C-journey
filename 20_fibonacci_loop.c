#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int a=0, b=1;

    printf("Fibonacci Series: \n");

    for(int i=0; i<n; i++)
    {
        printf("%d \n",a);
        int temp= a+b;
        a=b;
        b=temp;
    }
    return 0;
}