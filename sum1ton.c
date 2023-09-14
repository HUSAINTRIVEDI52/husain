#include <stdio.h>
int main()
{
    int num;
    int sum = 0;
    printf("enter a number:");
    scanf("%d", &num);

    int i = 1;
    while (i <=num)
    {
        sum = sum + i;
        i = i + 1;
    }

    printf("the sum of %d number is %d", num, sum);
    return 0;
}