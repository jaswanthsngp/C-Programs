#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
int a,b,c;
printf("press + for addition\n");
printf("press -for subtraction\n");
printf("press * for mutiplication\n");
printf("press / for division\n");
printf("press %% for remainder\n");
printf("enter your choice\n");
scanf("%c",&ch);
printf("enter the value of a and b");
scanf("%d%d",&a,&b);
switch(ch)
{
case '+':
c=a+b;
printf("the sum=%d",c);
break;
case '-':
c=a-b;
printf("the sub=%d",c);
break;
case '*':
c=a*b;
printf("the multiplication=%d",c);
break;
case '/':
c=a/b;
printf("the div=%d",c);
break;
default:
printf("no match found");
break;
case '%':
c=a%b;
printf("the remainder=%d",c);
break;
}

getch();
return 0;
}