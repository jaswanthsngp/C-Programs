#include<stdio.h>
int main()
{
char s1[150];
int i,v,c,d,s;
v=c=d=s=0;
printf("Enter a string:\n");
gets(s1);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U')
++v;
else if((s1[i]>='a'&& s1[i]<='z') || (s1[i]>='A'&& s1[i]<='Z'))
++c;

else if(s1[i]>='0'&&s1[i]<='9')
++d;
else if (s1[i]==' ')
++s;
}
printf("Vowels: %d",v);
printf("\nConsonants: %d",c);
printf("\nDigits: %d",d);
printf("\nWhite spaces: %d",s);
return 0;
}