//Area of Triangle
#include<stdio.h>
int main()
{
	int b,h;
	printf("Enter the base length b=");
	scanf("%d",&b);
	printf("Enter the height h=");
	scanf("%d",&h);
	float A=0.5*b*h;
	printf("Area of the Triangle is %f",A);
	return 0;
}