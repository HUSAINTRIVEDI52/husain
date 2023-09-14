#include <stdio.h>
int main()

{
    int num;
    int sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    int i=1;
    while(i<=num)
    {
        sum=sum+1;
        i=i++;
    }
    printf("the sum of even numbers of %d are %d",num,sum);
}