#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,root1,root2,img,real;
	printf("\n enter the value for a,b and c of equation: ");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
	{
printf("\n imginary ");
d=sqrt(fabs(d));
real=-b/(2*a);
img=b/(2*a);
printf("\n rot1=%.2f + i%.2f",real,img);
printf("\n rot2=%.2f -+ i%.2f",real,img);
}
else
{
	 printf("\n roots are real.");
	 d=sqrt(d);
	 root1=(-b+d)/(2*a);
	 root2=(-b-d)/(2*a);
	 printf("\n roo1=%.2f \t root2=%.2f",root1,root2);
}
return 0;
}
