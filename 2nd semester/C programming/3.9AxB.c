#include<stdio.h>
#define M 3
#define N 4
void main()
{
	int A[M][N],B[N][M],AbyB[M][M],BbyA[N][N],row_mul_col=0,mul,i,j,k;
	printf("enter the elements of amtrix A of order %d %d: ",M,N);
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter the elements of amtrix B of order %d %d: ",N,M);
	for(i=0;i<N;i++)
	{
		for(j=0;j<M;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<M;i++)
	{
		for(j=0;j<M;j++)
		{
			for(k=0;k<N;k++)
			{
				mul=mul+A[i][k]*B[k][j];			
			}
			AbyB[i][j]=mul;
			mul=0;
		}
	}
	printf("\n matrix A*B: \n");
	for(i=0;i<M;i++)
	{
		for(j=0;j<M;j++)
			printf("%d\t",AbyB[i][j]);
		printf("\n");
	}
	
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			for(k=0;k<M;k++)
			{
				mul=mul+B[i][k]*A[k][j];			
			}
			BbyA[i][j]=mul;
			mul=0;
		}
	}
	printf("\n matrix B*A:\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		printf("%d ",BbyA[i][j]);
		printf("\n");
		
	}	
}
