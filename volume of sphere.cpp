#include<stdio.h>
int main()
{
	float R,volume;
	printf("enter R value");
	scanf("%f",&R);
	volume=4/3*3.14*R*R*R;
	printf("volume of sphere=%f",volume);
	return 0;
}
