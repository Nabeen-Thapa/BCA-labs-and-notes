//transpose using function
#include<stdio.h>
void transpose(int [10][10],int [10][10],int,int);
void display(int [10][10],int,int);
int main()
{
	int a[10][10],t[10][10],i,j,r,c;
	printf("enter the no. of rows and column(<10): ");
	scanf("%d%d",&r,&c);
	printf("enter the elements of a matrix: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("original matrix \n");
	display(a, r, c);
	transpose(a, t, r, c);
	printf("transpose matrix \n");
	display (t,r,c);
	return 0;
}
void transpose(int a[10][10],int t[10][10],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
}
void display(int x[10][10],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}








