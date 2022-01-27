#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*p,*q;
	printf("Enter the number of elements\t");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	q=(int*)calloc(n,sizeof(int));
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",(p+i));
	*(q+i)=*(p+i);
	}
	free(p);
	free(q);
	return 0;
}