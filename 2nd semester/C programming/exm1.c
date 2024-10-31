#include<stdio.h>
int main()
{
	int i,j,n;
	printf("num ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("the table of %d",i);
		for(j=0;j<=10;j++)
		
		printf("%d x %d = %d\n",i,j,i*j);
	}
}
