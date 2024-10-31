#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	printf(" enter the range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\nthe table of %d",i);
		for(j=0;j<=10;j++)
		{
		printf("\n%d x %d = %d",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
