//quadratic eq
#include<stdio.h>
#include<math.h>
void quad(float, float, float);
void main()
{
	float a,b,c;
	printf("enter the value for a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	quad(a,b,c);
	return 0;
}
void quad(float a, float b, float c)
{
	float p,q;
	float d;
	d=b*b-4*a*c;
	if(d<0)
	{
		printf("imaginayr roots");
		d=sqrt(fabs(d));
		p=-b/(2*a);
		q=d/(2*a);
		printf("\n root1=%.2f + i %.2f",p,q);
		printf("\n root2=%.2f - i %.2f",p,q);
	}
	else{
		printf("\n roots are real");
		d=sqrt(d);
		p=(-b+d)/(2*a);
		q=(-b-d)/(2*a);
		printf("\n root1 = %.2f \t root2 = %.2f",p,q);\
	}
}

