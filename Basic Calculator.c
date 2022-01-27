#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,sum,diff,mul,div,mod;
	printf("enter the values");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	diff=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	mod=num1%num2;
	printf("a+b= %d\n",sum);
	printf("a-b= %d\n",diff);
	printf("a*b= %d\n",mul);
	printf("a/b= %d\n",div);
	printf("remainder= %d",mod);
	getch();
	return 0;
}