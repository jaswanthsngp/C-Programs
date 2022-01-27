#include<stdio.h>
#include<conio.h>
void sort(int x[],int n)
{
int i,j,t;
for(i=1;i<n;i++)//for pass
{
for(j=0;j<n-1;j++)//for comparison
{
if(x[j]>x[j+1])
{
t=x[j];
x[j]=x[j+1];
x[j+1]=t;
}
}
}
}
void main( )
{
int a[20],n;
int i;
printf("\nEnter the size of the array:");
scanf("%d",&n);
printf("\n Enter the elements in the array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sort(a,n);
printf("\n Sorted array is");
for(i=0;i<n;i++)
printf("%d ",a[i]);
getch( );
}