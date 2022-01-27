#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,*p;
	printf("enter the no of elements\t");
	scanf("%d",&n);
	p=(int*)calloc(n, sizeof(int));
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	printf("The elements are\n");
	for(i=0;i<n;i++)
	printf("%d\n",*(p+i));
	free(p);
	return 0;
}