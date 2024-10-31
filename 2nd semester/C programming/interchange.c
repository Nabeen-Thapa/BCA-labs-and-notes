#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value for a and b: ");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the value is %d  and %d",a,b);
	return 0;
}
