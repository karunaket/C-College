#include<stdio.h>

int main()
{
	int a, b;
	
	printf("Enter the value for a and b:");
	scanf("%d %d", &a, &b);
	
	if(a>b)
	{
		printf("a is greater than b.");
	}
	else
	{
		printf("b  is greater than b.");
	}
	return 0;
}
