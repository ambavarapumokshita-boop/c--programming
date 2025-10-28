#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a&b&c&d values");
	scanf("%d%d%d",&a,&b,&c);
	if(a>=b&&a>=c&&a>=d)
	printf("A");
	else if(b>=c&&b>=d)
	printf("B");
	else if(c>=d)
	printf("C");
	else
	printf("D");
	return 0;
}
