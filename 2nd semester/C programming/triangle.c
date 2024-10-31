#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z;
	printf("Note that:\nx=hypoteneus \n y=base \n z=perpendicular ");
	printf("enter the value of three side of the trianggle: ");
	scanf("%d%d%d",&x,&y,&z);
	if(x==y==z)
	{
		printf("the triangle is equilateral");
	}
	else if(z==y || z==x || y==x)
	{
	printf("the triangle is isoceles");
	}
	else if(x!=y!=z)
	{
		printf("the triangle is scalene");
	}
	else(x=squrt(pow(y,2)+pow(z,2))
{
	printf("the triangle is right angle triangle");
}
	return 0;
}
