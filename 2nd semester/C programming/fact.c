#include<stdio.h>
#include<math.h>
void main()
{
	int a,b=1,i,sum=0;
	printf("number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
	b=b*i;
	sum=sum+b;
}
	printf("the fact is %d",sum);
	}
