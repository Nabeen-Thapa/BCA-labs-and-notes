//no argument and with return type
#include<stdio.h>
int sum();
int main()
{
	int r;
	r=sum();
	printf("the sum is %d",r);
	return 0;
}
int sum()
{
	int s,a,b;
	printf("enter any two numbers: ");
	scanf("%d %d",&a,&b);
	s=a+b;
	return s;
}
