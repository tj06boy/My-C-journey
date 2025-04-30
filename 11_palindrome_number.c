#include <stdio.h>
int main()
{
    int num,digit, temp, rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);

    temp= num;

    while(num!=0)
    {
    digit= num%10;
    rev= (rev*10)+digit;
    num= num/10;
    }

    if(rev==temp)
    {
        printf("%d is a plaindrome.\n");
    }
    else
    {
        printf("%d is not a plaindrome.\n");
    }

}