#include <stdio.h>
int main()
{
    float a,b;
    char c;

    printf("Enter two numbers:\n");
    scanf("%f%f",&a,&b);

    printf("Enter your choice\n+ for addition\n- for subtraction\n* for multiplication\n/ for division\n");
    scanf(" %c",&c);

    switch(c)
    {
    case '+':
    printf("Sum= %f\n", a+b);
    break;

    case '-':
    printf("Difference= %f\n", a-b);
    break;

    case '*':
    printf("Product= %f\n", a*b);
    break;
    
    case '/':
    {
    if(b==0)
    printf("Division by 0 is not possible\n"); 
    
    else
    printf("Quotient= %f\n", a/b);
    break;
    }

    default:
    printf("Enter a valid choice\n");
    }
return 0;
}