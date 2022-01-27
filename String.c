#include<stdio.h>
int main()
{
	char name[20];
	printf("Enter any name\t");
	gets(name);
	printf("The name is %s",name);
	return 0;
}