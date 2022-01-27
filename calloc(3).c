#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*p,*q;
	printf("Enter the no. of elements\t");
	scanf("%d",&n);
	int a[n],b[n];
	p=(int*)calloc(n,sizeof(int));
	q=(int*)calloc(n,sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
		*(q+n-1-i)=*(p+i);
	}
	printf("The reversed order is\n");
	for(i=0;i<n;i++)
	printf("%d\n",*(q+i));
	free(p);
	free(q);
	return 0;
}