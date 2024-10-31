//long double power 
#include<stdio.h>
long double power(int,int);
int main()
{
	int n,x,res;
	printf("enter the value of x: ");
	scanf("%d",&x);
	printf("enter the value of n: ");
	scanf("%d",&n);
	res=power(x,n);
	printf(" The %d to power %d is = %d ",x,n,res);
	return 0;
}
long double power(int x,int n)
{
	int result =1.0;
	int i;
	for(i=0;i<=n;i++)
	result*=x;
	return result;
}
