#include<stdio.h>
#include<math.h>
int main()
{
	int b,h;
	float area1,area2;
	printf("\n enter the  breadth and height for outer triangle: ");
	scanf("%d%d",&b,&h);
	area1=b*h*1/2;
	printf("the area of outer triangle is %f",area1);
	printf("\n enter the  breadth and height for inner triangle: ");
	scanf("%d%d",&b,&h);
	area2=area1-b*h*1/2;
	printf("the area of consintric triangle is %f",area2);
	return 0;
}
