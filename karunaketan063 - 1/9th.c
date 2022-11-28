#include<stdio.h>

int main()
{
	int x = 5, y = 2, z;
	
	z = x+y;
	printf("The sum of x and y = %d \n", z);   // Using variable
	
	printf("The sum of x and y = %d \n", x + y);  // Without using variable
	
	printf("The difference of x and y = %d \n", x - y);
	
	printf("The multiplication of x and y = %d \n", x * y);
	
	printf("The division of x and y = %d \n", x / y);  // Quotient
	
	printf("The division of x and y = %d \n", x % y);  // Remainder
	
	printf("The value = %d \n", ++x+y);  // = 1 + x + y = 8
	
	printf("The value = %d \n", ++x-y);  // = 1 + x - y = 
		
	return 0;
}
