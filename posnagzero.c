#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number");
    scanf("%d",&a);

    switch(1)
    {
        case 1:
        if(a>0){
            printf("%d is positive",a);
        }
        else if(a<0){
            printf("%d is nagative",a);
        }
        else
        printf("%d is zero",a);
        
    }
}