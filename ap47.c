#include <stdio.h>
int main()
{
    int ap,i;
    printf("Enter a number for AP:");
    scanf("%d",&ap);

    for(i=4;i<=3*ap-1;i=i+3)
    printf("%d ",i);
}