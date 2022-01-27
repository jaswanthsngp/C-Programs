#include<stdio.h>
struct student{
	char name[20];
	int reg;
	float cgpa;
	struct address{
		int hno;
		char city[10];
	}a;
};
int main()
{
	int n,i;
	printf("Enter the no. of students\t");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter the Name\t");
		fflush(stdin);
		gets(s[i].name);
		printf("Enter the Reg.No.\t");
		scanf("%d",&s[i].reg);
		printf("Enter CGPA\t");
		scanf("%f",&s[i].cgpa);
		printf("Enter the address\n");
		printf("H.No.\t");
		scanf("%d",&s[i].a.hno);
		printf("City\t");
		fflush(stdin);
		gets(s[i].a.city);
	}
	printf("\nThe details are\n");
	for(i=0;i<n;i++) printf("Name is %s\nReg.No. is %d\nCGPA is %f\nLives is %s City in H.No.%d\n",s[i].name,s[i].reg,s[i].cgpa,s[i].a.city,s[i].a.hno);
	return 0;
}