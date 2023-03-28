#include<stdio.h>

int main()
{
	int n,i;
	
	printf("Enter last number:");
	scanf("%d",&n);
	 i=1;
	do
	{
		if(i%2==1)
			printf("\n%d",i);
			i++;
	}
	while(i<=n);
	return 0;
}
