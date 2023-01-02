#include<stdio.h>
int main()
{
	int arr[100], size, i, sum = 0, flag = 1;
	
	printf("How many students are standing in the line? \n");
	scanf("%d",&size);
	
	printf("Enter array elements \n");
	
	for(i=0; i<size; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=2; i<size; i++)
	{
		if(arr[i] == arr[i-2] + arr[i-1])
		{
			printf("Yes, element at %d is sum of prev 2", i);
			flag=0;
		}
	}
	
	if(flag==1)
	{
		printf("No element is found to be the sum of prev 2");
	}
	
	return 0;
}
