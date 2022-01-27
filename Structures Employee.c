#include<stdio.h>
struct Employee
{
	char name[20],designation[10];
	int salary,ID;
};
int main()
{
	int n,i;
	printf("Enter the number of Employees\t");
	scanf("%d",&n);
	struct Employee E[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the Employee's Name, Designation, Salary, ID\n");
		scanf("%s %s %d %d",&E[i].name,&E[i].designation,&E[i].salary,&E[i].ID);
	}
	for(i=0;i<n;i++)
	{
		printf("Employee's Name:\t%s\n",E[i].name);
		printf("Designation:\t%s\n",E[i].designation);
		printf("Salary:\t%d\n",E[i].salary);
		printf("ID:\t%d\n",E[i].ID);
	}
	return 0;
}