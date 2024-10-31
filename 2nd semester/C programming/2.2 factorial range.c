#include<stdio.h>
int main()
{
	int i,j,fact,n,m;
	printf("Enter supplied range:");
	scanf("%d%d",&n,&m);
	printf("Factorial of %d to %d:",n,m);
	for(i=n;i<=m;i++)
	{
	fact=1;	
		for(j=i;j>=1;j--)
		{
		fact=fact*j;
		}
		printf("\nFactorial of %d=%d",i,fact);
    }
return 0;
}
