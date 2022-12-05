#include<stdio.h>
int main()
{
	int ch, a, b;
	char c;
	
	do{
		printf("\n Menu \n 1. Add \n 2. Subtract \n 3. Multiply \n 4. Divide \n 5. Modulus \n 6. Square \n");
		
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
				printf("\n Enter two integer values:");
				scanf("%d %d", &a, &b);
				printf("\n Output : %d", (a+b));
				break;
				
			case 2:
				printf("\n Enter two integer values:");
				scanf("%d %d", &a, &b);
				printf("\n Output : %d", (a-b));
				break;
				
			case 3:
				printf("\n Enter two integer values:");
				scanf("%d %d", &a, &b);
				printf("\n Output : %d", (a*b));
				break;
				
			case 4:
				printf("\n Enter two integer values:");
				scanf("%d %d", &a, &b);
				printf("\n Output : %d", (a/b));
				break;
				
			case 5:
				printf("\n Enter two integer values:");
				scanf("%d %d", &a, &b);
				printf("\n Output : %d", (a%b));
				break;
				
			case 6:
				printf("\n Enter two integer values:");
				scanf("%d %d", &a, &b);
				printf("\n Output : %d", (a*a)); // or printf("\n Output : %d", (b*b));
				break;
				
			default:
				printf("Invalid Input \n");
		}
		printf("\n Do you want to continue? (y/N):");
		scanf("%s",&c);
	}
	while(c=='Y' || c=='y');
	if(c=='N' || c=='n');
	
	printf("\n Thannk You!!!");

	return 0;
}
