#include<stdio.h>

int main(){
	int i;	
	printf("The leap year between 2000 to 3000 is:");
	for(i=2000; i<=3000; i++){
		  if(i%4==0 && i%100!=0 || i%400==0){
		  printf("\n%d",i);
		}
	}
	return 0;
}
