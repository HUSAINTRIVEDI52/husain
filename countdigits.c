#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter a number to print:");
    scanf("%d", &a);
    int count = 0;
    while (a != 0)
    {
        a = a / 10;
        count++;
    }
    printf("there are %d digits",count);
}