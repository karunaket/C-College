#include<stdio.h>
#include<conio.h>
int sum();
int main()
{
	sum();
	
	getch();
}
int sum(int a, int b)
{
	int x, y;
	
	printf("Enter 2 numbers:");
	scanf("%d %d", &x, &y);
	
	printf("The sum = %d",x+y);
}
