#include<stdio.h>
#include<string.h>
int main()
{
char a[15],b[15];
int i=0;
printf("enter first string \t");
gets(a);
for(i=0;a[i]!='\0';i++)
{
b[i]=a[i];
}
b[i]='\0';
printf("\ncopied string is %s\n",b);
return 0;
}