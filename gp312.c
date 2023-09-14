#include <stdio.h>
int main()
{
    int i,gp,n;
    printf("Enter number to print");
    scanf("%d",&gp);
    //error for first term( ap will be 3 12 48....)
    int a=3;
    for(i=0;i<=gp;i++)
    {
        a=a*4;
        printf("%d ",a);
            }
            return 0;
}