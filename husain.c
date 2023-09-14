#include <stdio.h>
int main()
{
    int i,num;
    int fact=1;

    printf("enter any number:");
    scanf("%d",&num);

    for (i=1;i<=num;i++)
    {
    fact=fact*i;
    }
    printf("factorial of %d=%d\n",num,fact);
}