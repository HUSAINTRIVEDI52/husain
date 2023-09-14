#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter a number:");
    scanf("%d",&j);

    for(i=1;i<=2*j-1;i=i+2)
    printf("%d ",i);
    return 0;
}