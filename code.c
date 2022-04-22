#include<stdio.h>
int main()
{
    int a,b,c;
    printf("please enter the number: ");
    scanf("%i",&a);
    c=a;
    for (b=1;b<c;b++)
    {
        a=b*a;
    }
    printf("The Factorial of the %i is %i.",c,a);
    return 0;
}