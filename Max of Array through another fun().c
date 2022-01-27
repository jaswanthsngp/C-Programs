#include<stdio.h>
void Task(int a[], int n);
int main()
{
	int x,i;
	printf("Enter the size of Array\t");
	scanf("%d",&x);
	int a[x];
	printf("Enter the Array Elements\n");
	for(i=0;i<x;i++)
	scanf("%d",&a[i]);
	Task(a,x);
	return 0;
}
void Task(int a[], int x)
{
	int i,max=0;
	for(i=0;i<x;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("Max element is %d",max);
}