#include<stdio.h>
int main()
{
	int num;
	printf("enter the number: ");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("%d numuber is even",num);
	}
	else
	{
		printf(" %d is not even",num);
	}
	return 0;
}

