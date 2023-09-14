#include <stdio.h>
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);

	int i=num;
	while(i>=1)
	{
       printf("%d\n",i);
       i--;
	}
}