#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int n,i,r;
	char*see;
	char ch[]=
	 {'A','*','B','4','8','C','/','D','E','I','J','K','5','9','L','M','N','O','P','Q','R','S','5','0','T','U','V','W','X','1','Y','Z','a','b','c','d','2','e','8','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','!','@','#','&'};
	 printf("\n enter the size of you password = ");
	scanf("%d",&n);
	if(n<4){
		printf("Generating error...");
		printf("\n you will get a password with size of 4 \n");
	}
	else{
		printf("Generating.....");
	}
	see == malloc(n*sizeof(char));
	srand(time(0)); 
 for(i=0;i<n;i++)
	{
 	r= rand()%73;
 	see[i]=ch[r];
	}
	printf("\n password= %s",see);
	return 0;
}