#include<stdio.h>
int main()
{
	int i;
	float c,f;
	printf("Enter 0 if you want C to F");
	printf("Enter 1 if you want F to C");
	scanf("%d",i);
	if(i=0)
	{
		printf("Enter the Temparature in C");
		scanf("%f",c);
		f=32+c*9/5;
		printf("%f Celcius= %f Farehiet",c,f);
	}else{
		printf("Enter the Temperature in F");
		scanf("%f",f);
		c=(f-32)*5/9;
		printf("%f Farenhiet= %f Celcius",f,c);
	}
	return 0;
}