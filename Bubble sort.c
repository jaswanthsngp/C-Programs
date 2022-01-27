#include<stdio.h>
#include<conio.h>
int main()
{
int a[10],i,n,j,temp;
printf("enter the number of elements");
scanf("%d",&n);
printf("\nenter the elements");
for(i=0;i<n;i++)//5
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)//pass
{
for(j=0;j<n-1;j++)//comparison
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("the sorted array is\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}


getch();
return 0;
}