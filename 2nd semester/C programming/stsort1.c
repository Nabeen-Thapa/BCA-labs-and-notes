#include<stdio.h>
#define N 100
int main()
{
	struct stuent
	{
		char name[];
		int roll;
		int marks[3];
	};
	struct student s[N],temp;
	int n;
	int i,j,k,t1,t2;
	printf("how many students: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the data of student %d\n",i+1);
		printf("enter name: ");
		scanf("%s",s[i].name);
		printf("enter roll: ");
		scanf("%d",&s[i].roll);
		printf("enter marks: ");
		for(j=0;j<=3;j++)
		{
			scanf("%d",s[i].marks[j]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<=n-1-i;j++)
			{
				t1+=t2=0;
				for(k=0;k<3;k++)
				{
				t1+=s[j].marks[k];
				t2+=s[j+1].marks[k];
			}
			if(t1>t2)
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
			}
		}
}
	printf("sorted list\n");
	for(i=0;i<n;i++)	
	{
		printf("name: %s\n",s[i].name);
		printf("roll : %d",&s[i].roll);
		printf("marks");
		for(j=0;j<3;j++)
		printf("%d",s[i].marks[j]);
	}
}
