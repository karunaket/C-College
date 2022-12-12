#include<stdio.h>

int main()
{
	double num;
	printf("\nEnter a num : ");
	scanf("%lf",&num);
	if (num<=0.0){
		if (num==0.0)
		{printf(" your enter zero");
		}else{("you enter negative number.");
		}
	}else{printf("you enter positive number.");
	}   
	return 0;
}
