#include<stdio.h>
#include<conio.h>
int main()
{
int a[3][3],i,j;

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("enter the values a[%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}//closing col(inner loop)
}//closing rows(outer loop)
printf("\nthe values are\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}//closing col(inner loop)
printf("\n");
}//closing rows(outer loop)
getch();
return 0;
}