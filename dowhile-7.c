#include<stdio.h>

int main(){
	int i;

	i=2000;
	printf("The leap year between 2000 to 3000 is:");
	do
	{
		if(i%4==0 && i%100!=0 || i%400==0)
		{
		       printf("\n%d",i);
		}
		       i++;
	}
	while(i<=3000);
	return 0;
}
