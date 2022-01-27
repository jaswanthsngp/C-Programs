//Division 
#include<stdio.h>
int main()
{
	int n1;
	float n2;
	printf("Enter Numerator a=");
	scanf("%d",&n1);
	printf("Enter Denominator b=");
	scanf("%f",&n2);
	float n3=n1/n2;
	printf("%d / %f = %f",n1,n2,n3);
	return 0;
}