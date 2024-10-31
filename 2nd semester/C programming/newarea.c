#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float area, radius, s1,s2,s3,base,height,sp;
    int choice,l,b;
	printf("enter eny two numbers: ");
	scanf("%d%d",&l,&b);
	printf("\n enter a for rectangle b for triangle c for square and d for circle\n");
	scanf("%d",&choice);
	switch(choice);
    {
    case 1:
        area=3.14*radius*radius;
        printf("Area of Circle is %.2f\n",area);
        break;
    case 2:
        area=(base*height)/2;
        printf("Area of Triangle is %.2f\n",area);
        break;
    case 3:
	    sp=(s1+s2+s3)/2;
        area=sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3));
        printf("Area of Triangle is %.2f\n",area);
        break;
    default:
        printf("Sorry, Invalid Choice\n");
    }
    printf("Thank You\n");
    return 0;
}
