#include<stdio.h>
int main()
{
int x;
char a,b,c,d,e,f,g,h,i,j,k,l;
21<=a<=47;
97<=b<=122;
91<=c<=96;
48<=d<=57;
65<=e<=90;
123<=f<=127;
97<=g<=122;
58<=h<=64;
65<=j<=90;
123<=k<=127;
97<=l<=122;
printf("Enter the number of letters of password\t");
scanf("%d",&x);
switch (x)
{
case 8:
printf("You might take %c%c%c%c%c%c%c%c as your password", a,b,c,d,e,f,g,h);
break;
case 9:
printf("You might take %c%c%c%c%c%c%c%c%c as your password", a,b,c,d,e,f,g,h,i);
break;
case 10:
printf("You might take %c%c%c%c%c%c%c%c%c%c as your password", a,b,c,d,e,f,g,h,i,j);
break;
case 11:
printf("You might take %c%c%c%c%c%c%c%c%c%c%c as your password", a,b,c,d,e,f,g,h,i,j,k);
break;
case 12:
printf("You might take %c%c%c%c%c%c%c%c%c%c%c%c as your password", a,b,c,d,e,f,g,h,i,j,k,l);
break;
default:
printf("Please enter a value between 8 and 12\n");
main();
}
return 0;
}