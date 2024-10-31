#include<stdio.h>
int main()
{
	int n,i,count=0,j,sum;
//	printf("enter the number: ");
//	scanf("%d",&n);
	for(i=1;i<=20;i++)
	{
		for(j=1;j<=20;j++)
      {	
		if(n%i==0)
			{
				sum=sum+i;
				printf(" %d",sum);
			}
	}
	}
	return 0;
}
