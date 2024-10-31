#include<stdio.h>
void first(void)
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
			for(j=1;j<=5;j++)
	
	{
		printf("%d ",j);
		//printf("%d ",i);
	}
	printf("\n");
	first();
}
return 0;
}
