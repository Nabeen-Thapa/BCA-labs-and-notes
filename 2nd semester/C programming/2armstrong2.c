#include<stdio.h>
#include<math.h>
int main()
{
	int num,n,rem,sum,i=0;
	printf("enter the number to check armstrong or not: ");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		n/=10;
		i++;
	}
	do
	{
		
	//	num=num/10;
	//	i++;
	
	 {
		rem=num%10;
		sum=sum+pow(rem,i);
		num= num/10;
     }
	}
	while(num>0);
	{
		if(sum==n)
		{
			printf("armastrong");
		}
		else
		{
				printf("not armastrong");
		}
	}
	return 0;
}
