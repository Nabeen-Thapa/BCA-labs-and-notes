#include<stdio.h>
#include<math.h>
int main()
{
	int p,h,b;
	printf("enter the value for hypotenuse and perpendicular of triangle: ");
	scanf("%d%d",&h,&p);
	b=sqrt(pow(h,2)-pow(p,2));
	printf("the base is %d",b);
	return 0;
}
