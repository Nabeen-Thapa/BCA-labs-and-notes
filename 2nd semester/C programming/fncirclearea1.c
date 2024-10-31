//area fo circle using  argument and no return
#include<stdio.h>
void area(int);
void main()
{
	int r;
	printf("enter radius: ");
	scanf("%d",&r);
	area();
}
void area(int r)
{
	int a,i,r;
	float pi=3.14;
	a=2*pi*r*r;
	printf("area is %d",a);
}
