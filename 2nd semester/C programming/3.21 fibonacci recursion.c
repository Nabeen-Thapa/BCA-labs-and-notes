//fabonacci series using recursion fucntio
#include<stdio.h>
int fib(int n);
void main()
{
	int n,i;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("fibonacci numbers up to %d terms: ",n);
	for(i=0;i<=n;i++)
	printf("%d ",fib(i));
	getch();	
}
int fib(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else
	return fib(n-1) + fib(n-2);
}