#include<stdio.h>
int main()
{
	int n=1,i,c=0,sum;
	int count=1;
	while(n<=100) 
	{
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			sum+=n;
			count++;
		}
		c=0;
		n++;
		if(count==20)
		break;
	}
	printf("Sum of prime numbers upto 20=%d",sum);
	printf("\nAverage=%d",sum/20);
	return 0;
}
