#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str;
	int n,i,l=0;
	printf("enter n");
	scanf("%d",&n);
	str=(char *)malloc(n*sizeof(char));
	fflush(stdin);
	gets(str);
	puts(str);
	for(i=0;*(str+i)!='\0';i++)
	{
		l++;
	}
	printf(" %d",l);
	free(str);
	return 0;
}