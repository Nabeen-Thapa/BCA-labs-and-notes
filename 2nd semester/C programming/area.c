#include<math.h>
#include<math.h>
int main()
{
	int l,b,r;
	char s;
	printf("enter eny two numbers: ");
	scanf("%d%d",&l,&b);
	printf("\n enter:\n 1 for rectangle \n 2 for triangle \n 3 for square and \n 4 for circle\n");
	scanf("%c",&s);
	switch(s)
	{
	case 1:
	printf("area of rectangle is %d",l*b);
	break;
	case 2:
	printf("area of triangle is %d",l*l);
	break;	
	case 3:
	printf("area of square is %d",1/2*l*b);
	break;
	case 4:
	printf("enter the radious of circle: ");
	scanf("%d",&r);	
	printf("area of circle is %d",3.14*r*r);
	break;
		default:
		printf("wrong entry");
	}
		return 0;
	}
