#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i-1;k++)
		{
		printf(" ");
	}
	for(j=1;j<=(n+1)-i;j++)
	
	{
		printf("%d",j);
			}
	printf("\n");
}
	
return 0;
}
