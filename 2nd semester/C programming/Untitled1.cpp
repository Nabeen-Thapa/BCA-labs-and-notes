#include<stdio.h>
int main()
{
	struct student
	{
		int roll_no;
		float marks;
		char name[20];
		char address[20];
	}std[5];
	int i;
	for(i=0;i<5;i++)
	{
			printf("Enter the name,roll_no,address :");
			scanf("%s",std[i].name);
			scanf("%d",&std[i].roll_no);
			scanf("%s",std[i].address);
	}
	for(i=0;i<5;i++)
	{
			printf("Displaying all the records");
			printf("\n\n%s",std[i].roll_no);
			printf("\n\n%d",std[i].name);
			printf("\n\n%s",std[i].address);
    }
			return 0;
}
