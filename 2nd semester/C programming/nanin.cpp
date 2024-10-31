//strtucture withinn structure nested structure
#include<stdio.h>
struct record
{
	char name[20];
	int marks;
	
	struct
	{
		char tem_add[20];
		char per_add[20];
	}add;
}stu;
int main()
{
	printf("ENter name:");
	scanf("%s",stu.add);
	printf("ENter temporary address:\n");
	scanf("%s",stu.add.tem_add);
	printf("ENter permanent name:\n");
	scanf("%s",stu.add.per_add);
	printf("ENter marks:\n");
	scanf("%d",&stu.marks);
	printf("Dsiplaying record:\n");
	scanf("%s",stu.name);
	printf("%d",stu.name);
		printf("%d",stu.marks);
			printf("%s",stu.add.tem_add);
	printf("%s",stu.add.per_add);
	return 0;
}
