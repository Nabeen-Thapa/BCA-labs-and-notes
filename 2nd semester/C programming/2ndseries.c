//1 1 2 3 5 8 13 .......n
#include<stdio.h>
#include<math.h>
int main()
{
	int n,a=0,b=1,c,i;
	printf("entrer the value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	printf("%d",a);
	printf(" ");
	c=a+b;
	a=b;
	b=c;
}
return 0;
}
