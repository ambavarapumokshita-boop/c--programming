#include<stdio.h>
int main()
{
	long int i,n,fact;
	printf("enter any number");
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("fact=%ld",fact);
	return 0;
}
