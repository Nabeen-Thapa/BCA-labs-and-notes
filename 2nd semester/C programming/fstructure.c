//write record to a file using structure
#include<stdio.h>
#include<stdlib.h>
int main()
{
	//FILE *fp;
	char another='y';
	struct employee
	{
		char name[20];
		int age;
		float salary;
	};
	struct employee emp;
	FILE *fp;
	fp=fopen("employee","wb");
	if(fp=NULL)
	{
		printf("not found");
		exit(1);
	}
	else
	{
	while(another=='y')
	{
		printf("\nenter the name,age and salary of employee: ");
		scanf("%s %d %f",emp.name,&emp.age,&emp.salary);
		fwrite(&emp,sizeof(emp),1,fp);
		printf("\n add another record(y/n): ");
		fflush(stdin);
		another=getch();
	}
}
	fclose(fp);
	return 0;
	
}
