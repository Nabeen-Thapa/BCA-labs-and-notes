#include<stdio.h>
struct employee
{
	char name[20];
	char address[40];
	int age;
	float salary;
};
int main()
{
	struct employee e[50];
	int n;
	int i;
	float avg_sal=0;
	printf("How many employees are there?:\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter information about employee %d",i+1);
		printf("\nName:");
		scanf("%s",e[i].name);
		printf("Address");
		scanf("%s",e[i].address);
		printf("Age");
		scanf("%s",&e[i].age);
		printf("Salary");
		scanf("%s",&e[i].salary);
	}
	printf("\n");
	printf("\n Employee name\t Address \t Age\t Salary");
	for(i=0;i<n;i++)
	printf("\n%s\t\t%s\t\t%d\t\t%f\n",e[i].name,e[i].address,e[i].age,e[i].salary);
	for(i=0;i<n;i++)
	avg_sal=avg_sal/n;
	printf("\nAverage Salary=%.2f",avg_sal);
}
