#include <stdio.h>
int main()
{
    char a,b,c;
    printf("enter any alphabet:");
    scanf("%c",&a);

    switch(a)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
    
    printf("%c is vowel",a);
    break;
    default:
    printf("%c is consonant",a);
    }
}