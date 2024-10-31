// find power value using recursion funcation
#include<stdio.h>
long power (int,int);
int main()
{
	int b,n;
	long p;
	printf("enter the value for b and n: ");
	scanf("%d%d",&b,&n);
	p=power(b,n);
	printf("power =%ld",p);
	return 0;
}
long power(int b,int n)
{
	if(n==0)
	return 1;
	else
	return b*power(b,n-1);
}
