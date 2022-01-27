#include<stdio.h>
#include<string.h>
int main()
{
	char n[15]="Hello";
	int l=strlen(n);
	char n1[10],n2[10],n3[10]="hello";
	puts(n);
	strcpy(n1,n);
	strncpy(n2,n,3);
	strcat(n,n3);
	puts(n);
	puts(n1);
	puts(n2);
	printf("%d\n",l);
	printf("%s\n",strupr(n));
	printf("%s\n",strlwr(n));
	printf("%s\n",strrev(n));
	printf("%d\n",strcmp(n,n3));
	printf("%d\n",stricmp(n,n3));
	printf("%d\n",strncmp(n,n3,3));
	return 0;
}