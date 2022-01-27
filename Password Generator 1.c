//Password Generator
#include<stdio.h>
int main()
{
	int x,i;
	printf("Enter the no. of letters\t");
	scanf("%d",&x);
	char pwd[x];
	for(i=0;i<x;i++)
	{
		printf("%c",pwd[i]);
	}
	if(x<8)
	printf("\nThis Password is easy to remember, but too small to be secure");
	else if(x>12)
	printf("\nThis password is secure but tough to remember");
	else
	printf("\nThis is the optimum size for a Password");
	return 0;
}
/*Mam, I wrote a simple code now. 
 But I couldn't understand why .exe file stops working suddenly
 I didn't initialize because then I get garbage values and that's what I want
 If there is any error in the code, please help me solving it*/