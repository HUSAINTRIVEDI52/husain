#include <stdio.h>
int main()
{
    int n,b,c;
    int a=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++)
    {
        if (n%i==0){
            printf("The number is composite\n");
            break;
        }
        if(n==1)
        {
            printf("1 is neither prime nor composite");
        }
        else if (a==0)
        {
            printf("the number is composite");
        }
        else
        {
            printf("The number is prime");
        }
       
    }
    return 0;
}