#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,z;
	printf(" \nx=hypoteneus \n y=base \n z=perpendicular\n ");
	printf("enter the value of three side of the triangle: ");
	scanf("%d%d%d",&x,&y,&z);
	if(x==y && y==z && z==x)
	{
		printf(" its equilateral angle triangle");
	 }
	else if(z==y && z!=x|| z==x && z!=y || y==x && y!=z)
	{
	printf("the triangle is isoceles");
	}
	else if(x!=y && y!=z && z!=x)
	{
		if(x==sqrt(pow(y,2)+pow(z,2)))
		{
			printf("its right angle triangle");
	}
		else
		{
			printf("its scalene angle triangle");
		}
	}

return 0;
}
