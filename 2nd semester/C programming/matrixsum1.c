//matrix sum
#include<stdio.h>
int main()
{
	int x,y,a[100][100],b[100][100],i,j,sum[100][100];;
	printf("enter the number of rows and columns: ");
	scanf("%d%d",&x,&y);
		printf("enter the elements in a:");
	for(i=0;i<x;i++)
	{
	for(j=0;j<y;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("elements of a:\n");
	for(i=0;i<x;i++)
	{
	for(j=0;j<y;j++)
	{
		printf("%d ",a[i][j]);
	}
printf(" \n");	
}
	printf("\nenter the elements in b:");
	for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
	{
		scanf("%d",&b[i][j]);
	}
	printf("\n");
}
printf("\nthe elements of b:\n");
	for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
	{
		printf("%d ",b[i][j]);
	}
	printf("\n");
}
for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
	{
		sum[i][j]=a[i][j]+b[i][j];
	}
}
printf("the sum is:\n");
for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
	{
		printf("%d ",sum[i][j]);
	}
	printf("\n");
}
return 0;
}
