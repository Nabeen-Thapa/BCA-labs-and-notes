#include<stdio.h>
#include<math.h>
int main()
{
	int num,rem,sum=0;
	printf("enter the numher: ");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("the sum is  %d",sum);
	return 0;
}
