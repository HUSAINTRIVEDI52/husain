#include <stdio.h>
int main ()
{
    int  i, n;
    for (i = 2; i <= 100; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        printf("%d ", i);
    }
}
