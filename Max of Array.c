#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],i,j,max;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter the values a[%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}//closing col(inner loop)
}//closing rows(outer loop)
max=a[0][0];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(max<a[i][j])
{
max=a[i][j];
}
}
}
printf("the max element is %d", max);
getch();
return 0;
}