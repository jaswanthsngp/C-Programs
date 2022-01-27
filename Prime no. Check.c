#include<stdio.h>
int main()
{
	int x,i,status;
	printf("Enter the number\t");
	scanf("%d",&x);
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		status=1;
		break;
	}
	if(status)
	printf("%d is not a Prime",x);
	else printf("%d is a Prime",x);
}
