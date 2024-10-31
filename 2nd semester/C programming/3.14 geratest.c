#include<stdio.h>
int greatest(int,int);
int main()
{
	int a,b,c;
	printf("enter any two numbers: ");
	scanf("%d %d",&a,&b);
	c=greatest(a,b);
	printf("the greatest number is %d",c);
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

