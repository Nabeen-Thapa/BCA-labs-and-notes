//area fo circle using no argument and  return
#include<stdio.h>
int area();
int main()
{ int r,t;
	t=area();
	printf("area is %d",t);
}
int area()
{
	int a,i,r;
	printf("enter radius: ");
	scanf("%d",&r);
	float pi=3.14;
	a=2*pi*r*r;
	return a;
}
