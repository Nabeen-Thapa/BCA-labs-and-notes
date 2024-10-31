#include<stdio.h>
int main()
{
	
	struct student
	{
		char name[20];
		int roll;
		char facultry[10];
		char course[10];
		int marks;
	};
	struct student st[100];
	int n,i;
	printf("enter how many students: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("enter the details of %d student",i+1);
		printf("\nenter name: ");
		scanf("%s",st[i].name);
		printf("\nenter roll: ");
		scanf("%d",&st[i].roll);
		printf("\nenter facultry: ");
		scanf("%s",&st[i].facultry);
		printf("\nenter course: ");
		scanf("%s",&st[i].course);
		printf("\nenter marks: ");
		scanf("%d",&st[i].marks);
	}
	printf("Name\troll\t facultry\t course\tmarks");
	for(i=1;i<=n;i++)
	{
		if(st[i].marks>=250)
		{
			printf("\n%s\t%d\t %s\t %s\t %d",st[i].name,st[i].roll,st[i].facultry,st[i].course,st[i].marks);
		}
	}
return 0;	
}
