#include<stdio.h>
int main()
{
	int i,j,n=11;
	for(i=11;i<=14;i++){
		for(j=11;j<=i;j++){
			printf("%d ",n);
			n++;
		}
		printf("\n");
	}
}
/*
output
11
12 13
14 15 16
17 18 19 20
*/