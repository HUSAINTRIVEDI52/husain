
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter first number");
    scanf("%d",&a);

    switch(a % 2)
    {
        case 0:
        printf("%d is an even number",a);
        break;

        case 1:
        case -1:
        printf("%d is an odd number",a);
        break;

        default:
        printf("This is an invalid input");
    }


}