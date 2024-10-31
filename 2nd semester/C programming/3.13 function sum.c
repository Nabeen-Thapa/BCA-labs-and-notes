//function sum
#include<stdio.h>
int add(int c, int d)
{
	int sum;
	sum=c+d;
	return sum;
}
int main()
{
	int a=50,b=100,x;
	x=add(a,b);
	printf("the sum of %d and %d = %d",a,b,x);
	return 0;
}
