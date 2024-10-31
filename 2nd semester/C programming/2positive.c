#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	if(n>0)
	{
	printf("\n%d is postive",n);
	if(n%2==0)
	{
	printf("\
	n%d is even",n);
}
else
{
	printf("\n%d is odd",n);
}
}
else
{
	printf("\n%d is negstive",n);
}
return 0;
}
