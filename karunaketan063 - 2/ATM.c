#include<stdio.h>

void balance_f();
void deposit();
void withdraw();
void pin_f();

int pin = 1234, pinuser, withdraw_Amount, Deposit_Amount;
char ch;
float balance = 0;

void main()
{
	int n;
	
	do
	{
		printf("Welcome to SBI \n _____________________");
		printf("\n 1. Check Balance \n 2. Deposit Money \n 3. Withdraw Money \n 4. PIN Change \n 5. Exit");
		printf("\n Enter your choice:");
		scanf("%d", &n);
		
		switch(n)
		{
			case 1:
				printf("Checking Balance...");
				balance_f();
				break;
				
			case 2:
				printf("Depositing Your Money...");
				deposit();
				break;
				
			case 3:
				printf("Withdrawing Your Money...");
				withdraw();
				break;
				
			case 4:
				printf("PIN Change Request Is On Process...");
				pin_f();
				break;
				
			case 5:
				printf("Thank You...");
				break;
		}
		
		printf("\n Do you want to continue(Y/N):");
		scanf("%s", &ch);
	}
	while(ch=='y' || ch=='y');
}

void balance_f()
{
	printf("\n Enter Your PIN:");
	scanf("%d", &pinuser);
	
	if(pin==pinuser)
	{
		printf("Your balance is Rs. %f", balance);
	}
	else
	{
		printf("Invalid PIN");
	}
}

void deposit()
{
	printf("\n Enter Your PIN:");
	scanf("%d", &pinuser);
	
	if(pin==pinuser)
	{
		printf("Enter the amount to deposit:");
		scanf("%d", &Deposit_Amount);
		
		printf("Success..! Rs. %d credited to your account", Deposit_Amount);
		balance += Deposit_Amount;
	}
	else
	{
		printf("Invalid PIN");
	}
}

void withdraw()
{
	printf("\n Enter Your PIN:");
	scanf("%d", &pinuser);
	
	if(pin==pinuser)
	{
		printf("Enter the amount to be withdrawn:");
		scanf("%d", &withdraw_Amount);
		
		if(balance < withdraw_Amount)
		{
			printf("Insufficient Balance");
		}
		else
		{
			printf("Success..! Please collect Rs. %d", withdraw_Amount);
		    balance -= withdraw_Amount;
		}
	}
	else
	{
		printf("Invalid PIN");
	}
}

void pin_f()
{
	int pinuser1,pinuser2;
	pinn:
		
		printf("\n Enter old PIN:");
		scanf("%d", &pinuser);
		
		if(pin==pinuser)
		{
			printf("\n Enter new PIN:");
			scanf("%d", &pinuser1);
			
			printf("\n Confirm new PIN:");
			scanf("%d", &pinuser2);
			
			if(pinuser1==pinuser2)
			{
				printf("Success...! Your PIN has been changed.");
				pin=pinuser1;
			}
			else
			{
				printf("Doesn't match'");
				goto pinn;
			}
		}
		else
		{
			printf("Incorrect PIN try again");
			goto pinn;
		}
}

