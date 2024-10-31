#include<stdio.h>
#include<math.h>
int main()
{
	int num,rem,sum;
	printf("enter the number to sum: ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("the sum is %d",sum);
	return 0;
}
