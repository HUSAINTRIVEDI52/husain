#include <stdio.h>
int main()
{
	int num,tn;
	printf("Enter table number");
	scanf("%d",&tn);

	int i=1;
	while(i<=10){
		printf("%d x %d =%d\n",tn,i,(tn*i));
		
		i++;
	}
}