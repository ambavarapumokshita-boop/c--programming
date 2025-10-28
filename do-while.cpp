#include<stdio.h>
int main()
{
	int i=1,N;
	printf("enter N values");
	scanf("%d",&N);
	do
	{
		printf("%d",i);
		i+=1;
	}
	while(i<=N);
	return 0;
}
