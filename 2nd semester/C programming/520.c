#include<stdio.h>
int main()
{
int n,count=0,i;
printf("enter num: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%2==0)
{
count++;
	}
}
	if(count==2)
	{
		printf("prime");
	}
	else
	{
		printf("not");
	}
	return 0;
}
