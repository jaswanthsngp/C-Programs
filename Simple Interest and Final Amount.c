#include<stdio.h>
int main()
{
	float I,R,P,T,A;
	printf("Principle P= ");
	scanf("%f",&P);
	printf("Rate of Interest per annum in %% R=");
	scanf("%f",&R);
	printf("Time Period in Months=");
	scanf("%f",&T);
	I= P*R*T/1200;
	printf("Interest is %f\n",I);
	A=I+P;
	printf("Final Amount is %f",A);
	return 0;
}