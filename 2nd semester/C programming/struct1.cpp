 #include<stdio.h>
int main()
{
	
	struct student
	{
		char name[20];
		int roll;
		int marks[3];
	};
	struct student st[3],temp;
	int i,j,k,t1,t2;
	for(i=0;i<=3;i++)
	{
		printf("enter the details of %d student",i+1);
		printf("\nenter name: ");
		scanf("%s",st[i].name);
		printf("\nenter roll: ");
		scanf("%d",&st[i].roll);
		printf("enter the marks of three sub\n");
		for(j=0;j<=3;j++)
		{
			scanf("%d",&st[i].marks[j]);
		}
		for(i=0;i<3-1;i++)
		{
			for(j=0;j<=3-1-i;j++)
			
			{
				t1=t2=0;
				for(k=0;k<3;k++)
				{
					t1 +=st[j].marks[k];
					t2+=st[j+1].marks[k];
				}
				if(t1>t2)
				{
					temp=st[j];
					st[j]=st(j+1);
					st(j+1)=temp;
			    }
		    }
		}
		printf("sorted list\n");
		for(i=0;i<=3;i++)
		{
			printf("name: %s\n",st[i].name);
			printf("marks of three sub:\n");
			for(j=0;j<=3;j++)
			{
				printf("%d\n",st[i].marks[j]);
			}
			return 0;
		}
		
