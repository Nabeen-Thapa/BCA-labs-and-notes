#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,fact=1;
	printf(" enter the num: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
		}
		printf("%d",fact);
	return 0;
}
