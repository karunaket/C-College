#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	int i, totalwords;
	totalwords = 1;
	
	printf("\n Please Enter any string:");
	gets(str);
	
	for(i=0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			totalwords++;
		}
	}
	printf("\n The total no. of words in this string %s = %d", str, totalwords);
	
	return 0;
}
