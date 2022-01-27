#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	long z;
	char x[10]="199897998";
	int i=0;
	z=atol(x);
	printf(" %s %ld\n",x,z+2);
}