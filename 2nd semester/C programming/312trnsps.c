// trnspose
#include<stdio.h>
int main ()
{
	int i,j,b[5][3];
	int a[3][5]={{3,7,5,-2,8},{2,5,8,3,-4},{-6,9,3,6,5}};
	printf("in matrix form:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("transpose matrix form:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			b[j][i]=a[i][j];
			printf("%d\t",b[i][j]);
		}
			printf("\n");
	}
	/*	printf("transpose matrix form:\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	*/
	return 0;
}
