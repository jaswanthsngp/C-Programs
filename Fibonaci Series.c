//Fibonaci Series
#include<stdio.h>
#include<conio.h>
int fibo(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return fibo(n-1)+fibo(n-2);
}
void main()
{
	int n,i,c;
	printf("enter the number of terms\t");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		c=fibo(i);
		printf("%d\t",c);
	}
}