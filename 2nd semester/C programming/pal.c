#include<stdio.h>
#include<math.h>
int main()
{
	int n,rev=0,rem,temp,
	printf("enter num: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	if(temp==rev)
	{
	printf("palindrome");
	}else
	{
		printf(" not palindrome");
	}
	return 0;
}
