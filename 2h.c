#include <stdio.h>
int main ()
{
    int i,j;
    printf("Enter number to print:");
    scanf("%d",&j);
    for (i=j;i>=1;i--)
    printf("%d\n",i);
    return 0;
}