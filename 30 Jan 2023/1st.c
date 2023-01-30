#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int i, len, words;
	
	printf("Enter the string :");
	gets(str);
	
	len = strlen(str);
	
	for(i = 0 ; i < len ; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			words++;
		}
	}
	
	printf("The total no. of words present in the string = %d", words);
	
	return 0;
}
