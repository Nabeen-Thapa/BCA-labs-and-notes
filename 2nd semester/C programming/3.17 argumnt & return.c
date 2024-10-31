//with arguments and return type
#include<stdio.h>
int addition(int ,int);
int main()
{
	int a,b,sum;
	printf("enter the two numbers: ");
	scanf("%d %d",&a,&b);
	sum=addition(a,b);
	printf("the sum is %d",sum);
}
int addition(int a,int b)
{
	int sum=a+b;
	return sum;
}
