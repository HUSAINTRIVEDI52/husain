#include <stdio.h>
int main()
{
    int ap, i;
    printf("Enter a number for AP:");
    scanf("%d", &ap);
    // 4 7 10 13 AP to be printed here
    int a = 4;
    for (i = 1; i <= ap; i++)
    {
 a = a + 3;
        printf("%d ", a);}
   
}