#include<stdio.h>

int main()
{
	int n,i,sum=0;
	
	printf("Enter last number=");
	scanf("%d",&n);
	 i=1;
	do
	{
		
		sum=sum+i;
		printf("sum=%d",sum);
		i++;
	}
	
	
	while(i<=n);
	return 0;
	
}
