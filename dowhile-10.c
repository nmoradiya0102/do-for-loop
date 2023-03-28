#include <stdio.h>

int main()
{
	int no, i = 1;
	printf("Please enter a number: ");
	scanf("%d", &no);

	do
	{
		printf("%d * %d = %d\n", no, i, no * i);
		i++;
	} while (i <= 10);

	return 0;
}
