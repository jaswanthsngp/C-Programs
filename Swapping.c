#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Numbers before swapping:%d\t%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("Numbers after swapping:%d\t%d",a,b);
	return 0;
}