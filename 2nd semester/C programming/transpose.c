
#include<stdio.h>
int main()
{
	int m[3][3],t[3][3],i,j;
	printf("enter the elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
	printf("elements in matrix form:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m[i][j]);
			
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		t[j][i]=m[i][j];	
		}
	}
	printf("transpose\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",t[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}
