//external and global varialble
#include<stdio.h>
int a=4,b=5,c=6;
int sum();
int prod();
int main()
{
	printf("The sum is %d",sum());
	printf("\nThe product is %d",prod());
	return 0;
}
int sum()
{
	return (a+b+c);
}
int prod()
{
return (a*b*c);
}

