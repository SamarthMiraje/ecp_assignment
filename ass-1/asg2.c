#include<stdio.h>

int main()
{
	int num, i = 1, fact = 1;
	printf("Enter the number: ");
	scanf("%d",&num);

	do 
	{
		printf("%d*",i);
		fact = fact * i;
		i++;
	}while(i <= num);
	
	printf("\b\n=%d\n",fact);
	return 0;
}

	
