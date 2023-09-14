#include <stdio.h>
int main()
{
    int tn,i;
    printf("Enter table number");
    scanf("%d",&tn);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d\n",tn,i,(tn*i));
    }
}