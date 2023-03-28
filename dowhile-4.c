#include<stdio.h>

int  main()
{
	int n,i;
	
	printf("Enter last number=");
	scanf("%d",&n);
	 i=n;
	do
	{
		printf("\n%d",i);
		i--;
	}
	while(i>=1);
	return 0;
}
