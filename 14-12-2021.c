#include<stdio.h>
#include<string.h>
int i,j;
struct product
{
	char name[20];
	int price;
	int id;
}p[100];
void getdata()
{
	printf("enter data of products\n");
	for(i=0;i<3;i++)
	scanf("%s%d%d",p[i].name,&p[i].price,&p[i].id);
}
void display()
{
	printf("avaiable products are \n");
	printf("\tname\tprice\tid\n");
	for(i=0;i<3;i++)
	{
	printf("%10s",p[i].name);
	printf("%5d",p[i].price);
	printf("%5d\n",p[i].id);
}}
void search()
{
	char pname[20];
	printf("enter product to search");
	scanf("%s",pname);
	for(i=0;i<3;i++)
	if(stricmp(p[i].name,pname)==0)
	printf("name=%s pr=%d\n",p[i].name,p[i].price);
}
void sort()
{
	struct product temp;
	for(i=1;i<3;i++)
	for(j=0;j<2;j++)
	if(p[j].price>p[j+1].price)
	{
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
	}
	display();
}
int main()
{
	getdata();
	display();
	search();
	sort();
	return 0;
}