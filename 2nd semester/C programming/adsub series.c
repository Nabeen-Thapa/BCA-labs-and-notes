// x=a - a^2/2 -a^3/3 -a^4/4 ..........a^n/n
#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,i;
	float x = 0;
	printf("enter the value for a and n: ");
	scanf("%d%d",&a,&n);
	for(i=1;i<=n;i++)
	{
	if(i%2==0)
	x=x-pow(a,i)/i;
	else 
	x=x+pow(a,i)/i;
}
	printf("x = %f",x);
return 0;
}
