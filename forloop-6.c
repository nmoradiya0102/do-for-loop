#include<stdio.h>

int main(){
	int n,i;

	printf("Enter last number:");
	scanf("%d",&n);
	for(i=n; i>=1; i--){
			if(i%2==0){			
			printf("\n%d",i);
			}
	}

	return 0;
}
