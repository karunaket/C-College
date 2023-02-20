#include<stdio.h>
#include<stdlib.h>
void toBinary(int, int[]);
void toOctal(int, int[]);
void toHexa(int, char[]);
int main()
{
int binary[50], octal[50],n, i;
char hexa[50];
system("Clear");
printf("Enter the number to convert: ");
scanf("%d", &n);
toBinary(n, binary);
toOctal(n, octal);
toHexa(n, hexa);
return 0;
}
void toBinary(int n, int binary[])
{
int i;
for(i=0;n>0;i++)
{
binary[i]=n%2;
n=n/2;
}
printf("\n Binary of Given Number is =");
for(i=i-1;i>=0;i--)
{
printf("%d",binary[i]);
}
printf("\n");
}
void toOctal(int n, int octal[])
{
int i;
for(i=0;n>0;i++)
{
octal[i]=n%8;
n=n/8;
}
printf("\nOctal value of given number is = ");
for(i=i-1;i>=0;i--)
{
printf("%d", octal[i]);
}
printf("\n");
}
void toHexa(int n, char hexa[])
{
int remainder, i, quotient = n, j=0;
while(quotient!=0)
{
remainder = quotient%16;
if(remainder<10)
hexa[j++]=48+remainder;
else
hexa[j++]=55+remainder;
quotient=quotient/16;
}
printf("\n Hexa of Given Number is = ");
for(i=j-1;i>=0;i--)
printf("%c", hexa[i]);
printf("\n");
}
