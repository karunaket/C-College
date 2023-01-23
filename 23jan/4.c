#include<stdio.h>
#include<conio.h>
int sum(int, int);
int main()
{
	int x, y;
	
	printf("Enter 2 numbers:");
	scanf("%d %d", &x, &y);
	
	sum(x, y);
	
	printf("The sum = %d",x+y);
	
	getch();
}
int sum(int a, int b)
{
	return(a+b);
}
