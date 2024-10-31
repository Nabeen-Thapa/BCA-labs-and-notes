#include<stdio.h>
#define M 2
#define N 4
int main()
{
	int matrix[M][N],i,j;
	//printf("value for m and n: ");
	//scanf("%d%d",&m,&n);
	printf(" enter the matrix elements: ");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n The entered matrix is: \n");
		for(i=0;i<M;i++)
		{
		for(j=0;j<N;j++)
		{	
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
