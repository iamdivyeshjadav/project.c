#include<stdio.h>
int main()
{
	int i,first_digit,last_digit;
	printf("enter any number\n");
	scanf("%d",&i);
	last_digit=i%10;
	for(;i>=10;i/=10);
	first_digit=i;
	printf("the sum of last and first digit is:%d",first_digit+last_digit);
}