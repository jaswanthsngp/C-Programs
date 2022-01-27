#include<stdio.h>
#include<conio.h>
int main()
{
int sum=0,i,j,m,n;
printf("enter the number of rows\t");
scanf("%d",&m);
printf("\nenter the number of columns\t");
scanf("%d",&n);
int a[m][n];
printf("enter the elements\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
if(i==j)
sum=sum+a[i][j];
}
}
printf("the sum=%d",sum);
getch();
return 0;
}