#include<stdio.h>
int add(int c, int d)
{
	int sum;
	sum=c+d;
	return sum;
}
int main()
{
	int a=3,b=100,x;
	x=add(a,b);
	printf("the sum is %d",x);
	return 0;
}
