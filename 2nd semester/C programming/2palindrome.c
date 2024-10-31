#include<stdio.h>
#include<math.h>
int main()
{
	int num,n,rem,sum;
	printf("enter the number: ");
	scanf("%d",&num);
	n=num;
	do
	{
		rem=num%10;
		sum=sum*10+rem;
		num= num/10;
	}
	while(num>0);
	{
		if(sum==n)
		{
			printf(" palindrome");
		}
		else
		{
				printf(" not palindrome");
		}
	}
	return 0;
}

