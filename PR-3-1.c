#include<stdio.h>
int main()
{
	char ch;
	ch='a';
	printf("ans:");
	do{
		printf("%c ",ch);
		ch=ch+4;
		if(ch<='z'){
		}
	}while(ch<='z');
}
/* 
output
ans: a e i m q u y
--------------------------------
*/