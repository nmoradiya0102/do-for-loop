#include<stdio.h>

int main()
{ 
	int number;
	int n;
	
	number =1;

	printf("Enter the value of N: ");
	scanf("%d",&n);
	
	printf("Numbers from 1 to %d:\n",n);
	do
	{
		printf("%d \n ",number);
		number++;
	}
	while(number <= n);
	
	return 0;
}
