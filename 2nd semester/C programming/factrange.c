#include<stdio.h>
int main()
{
	int n,i,j,sum;
	printf("enter the range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	
		
		for(j=i;j>=1;j--)
		{
		sum=sum*i;
	printf("factorial of %d =%d",i,sum);
	printf("\n");
}

	return 0;
}
