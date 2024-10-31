#include<stdio.h>
int i,j,c,b[];
int main()
{
	int a[3][4],b[3][4];
	void input(int a[][4]);
	void add(int a[][4], int b[][4]);
	printf("enter the first matrix: ");
	input(a);
	printf("enter the second matrix: ");
	input(b);
	printf("\n addition of matrix is:\n");
	add(a,b);
	return 0;
}
void input(int a[][4])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	
	}
}
void add(int a[][4], int b[][4])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			c=a[i][j] + b[i][j];
			printf("%d ",c);
		}
		printf("\n");
	}
}
