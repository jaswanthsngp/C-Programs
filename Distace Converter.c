//Meter-KM,KM-meter
//KM-Mile,Mile-KM
//Inch-Meter-Inch
#include<stdio.h>
int main()
{
	float a,b,c,d,e,f;
	printf("Enter the value in Meters:");
	scanf("%f",&a);
	printf("%f Meters= %f Kilo Meters\n",a,a/1000);
	printf("Enter the value in Kilo Meters:");
	scanf("%f",&b);
	printf("%f Kilo Meters= %f Meters\n",b,b*1000);
	printf("Enter the value in Miles:");
	scanf("%f",&c);
	printf("%f Miles= %f Kilo Meters\n",c,c*1.609344);
	printf("Enter the value in Kilometers:");
	scanf("%f",&d);
	printf("%f Kilo Meters= %f Miles\n",d,d/1.609344);
	printf("Enter the value in Inches:");
	scanf("%f",&e);
	printf("%f Inches= %f Meters\n",e,e*0.0254);
	printf("Enter the value in Meters:");
	scanf("%f",&f);
	printf("%f Meters= %f Inches",f,f/0.0254);
	return 0;
}