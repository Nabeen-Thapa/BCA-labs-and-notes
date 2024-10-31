#include<stdio.h>
#include<math.h>
int main()
{
	int rem,num,sum;
	printf("enter the five digits number: ");
	scanf("%d",&num);
	if (num>=10000 && num<=99999)
	{
		while(num>0)
		{
	rem=num%10;
	sum=sum+rem;
	num=num/10;
}
printf("the indivisual sum of digits is %d",sum);
}
	else
	{
		printf("wrong entry");
	}
	return 0;
}
