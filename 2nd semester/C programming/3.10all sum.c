#include<stdio.h>
#define ROW 3
#define COL 3
int main()
{
int a[ROW][COL],i,j,sum=0;
printf("enter the elements of matrix: ");
for(i=0;i<ROW;i++)
{
	for(j=0;j<COL;j++)
	{
		scanf("%d",&a[i][j]);
		sum=sum+a[i][j];
	}
	printf("\n");
}
printf("sum of all enements =%d",sum);
return 0;	
}
