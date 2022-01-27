#include<stdio.h>
int main()
{
int n,no,rev=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
no=n%10;
rev=rev*10+no;
n=n/10;
}
printf("%d",rev);
return 0;
}