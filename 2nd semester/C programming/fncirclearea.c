//area fo circle using no argument and no return
#include<stdio.h>
int area();
int main()
{
	area();
}
int area()
{
	int a,i,r;
	float pi=3.14;
	printf("enter radius: ");
	scanf("%d",&r);
	a=2*pi*r*r;
	printf("area is %d",a);
}
