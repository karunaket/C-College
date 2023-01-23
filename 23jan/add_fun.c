#include<stdio.h>
int add(int, int);
int main()
{
	int a, b;
	
	printf("Enter 2 numbers.");
	scanf("%d %d", &a, &b);
	
	add(a,b);
	
	return 0;
}
int add(int a, int b)
{
	printf("The sum = %d",a+b);
}
