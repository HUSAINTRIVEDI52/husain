#include <stdio.h>
int main()
{
    int a;
    printf("Enter a digit to print:");
    scanf("%d", &a);
        int lastdigit = 0;
        int sum=0;
        while (a != 0)
        {
        lastdigit = a % 10;
        sum = sum + lastdigit;
        a = a / 10;
    }
    printf("The total of number is %d", sum);
     return 0;
}