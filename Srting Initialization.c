#include<stdio.h>
int main()
{
	char n[6]="hello";
	char n1[]="hii";
	char n2[]={'b','y','e','\0'};
	char n3[]={{'b'},{'y'},{'e'},{'\0'}};
	char *n4="welcome";
	puts(n);
	puts(n1);
	puts(n2);
	puts(n3);
	puts(n4);
	printf(" %s",n4);
	return 0;
}