#include<stdio.h>
#define M 3
#define N 3
int main()
{
	int matrix[M][N],i,j,T[N][M];
	printf("enter the elements pf matrix: ");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n The matrix to be transposed is:\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			T[j][i]=matrix[i][j];
		}
	}
	printf("\n The transpose matrix is :\n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d ",T[i][j]);
		}
		printf("\n");
	}
	return 0;
}
