#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z;
	printf("Note that:\nx=hypoteneus \n y=base \n z=perpendicular\n ");
	printf("enter the value of three side of the trianggle: ");
	scanf("%d%d%d",&x,&y,&z);
	if(x==y==z)
	{
		printf("the triangle is equilateral");
	}
	else
	{
		printf("the triangle is scalene");
	}
	else if(z==y && z!=x || z==x && z!=y || y==x && y!=z)
	{
	printf("the triangle is isoceles");
	}
	return 0;
}
