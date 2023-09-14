#include <stdio.h>
int main()

{
    int num;
    int sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    int i=0;
    while(i< num)
    {
        sum=sum+2;
        i++;    
    }
    printf("the sum of even numbers of %d are %d",num,sum);
}