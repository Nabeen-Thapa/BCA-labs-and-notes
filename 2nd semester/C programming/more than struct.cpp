#include<stdio.h>
#include<string.h>
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
	float avg_sal;
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
		scanf("%d",&e[i].age);
		printf("Salary");
		scanf("%f",&e[i].salary);
	}
	printf("\n");
	printf("\n Employee name\t Address \t Age\t Salary");
	for(i=0;i<n;i++){
	printf("\n%s\t\t%s\t\t%d\t\t%f\n",e[i].name,e[i].address,e[i].age,e[i].salary);
}
	printf("Salary greater than 10000");
	for(i=0;i<n;i++)
	if(e[i].salary>10000)
	{
		printf("\n%s\t\t%s\t\t%d\t\t%f\n",e[i].name,e[i].address,e[i].age,e[i].salary);
	}
}
