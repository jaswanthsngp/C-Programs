//Inch to Feet
#include<stdio.h>
int main()
{
	int In,Feet,div,mod;
	printf("Enter inches: ");
	scanf("%d",&In);
	div=In/12;
	mod=In%12;
	printf("%dinch=%dfoot%dinch",In,div,mod);
	return 0;
}