#include<stdio.h>
int sum(int,int);
int main()
{
	int a,b,s;
	printf("enter the values for sum: ");
	scanf("%d %d",&a,&b);
	sum(a,b);
	//printf("sum is %d",s);
	
}
int sum(int a, int b)
{
	int sum;
	sum=a+b;
	printf("sum is %d",sum);
	
}
