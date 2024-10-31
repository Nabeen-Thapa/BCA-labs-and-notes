#include<stdio.h>
int greatest(int,int);
int main()
{
	int a,b,c,d,e;
	printf("enter any three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	d=greatest(a,b);
	e=greatest(d,c);
	printf("the greatest number is %d",e);
	return 0;
}
	int greatest(int x,int y)
	{
		if(x>y)
		{
			return (x);
		}
		else
		{
			return (y);
		}
	}

