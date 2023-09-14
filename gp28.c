#include <stdio.h>
int main()
{
    int i,gp,n;
    printf("Enter number to print");
    scanf("%d",&gp);
    // ap will be 2 4 8 16....
    int a=1;
    for(i=2;i<=gp;i++)
    {
        a=a*2;
        printf("%d ",a);
            }
            return 0;
}