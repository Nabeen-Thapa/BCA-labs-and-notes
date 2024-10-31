#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter the age of three brothers: ");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(a<c)
		{
			printf(" a is youngest");
		}
		else
		{
			printf(" c is youngrst");
		}
	}
		else
		{
		if(b<c)
		{
			printf(" b is youngest");
		}
		else
		{
			printf(" c is youngest");
		}
	}
	return 0;
}

