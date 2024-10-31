#include<stdio.h>
int main()
{
	int i,j,c=0,sum=0;
	int count=0; 
	float average;
	for(i=1;i<=20;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			sum+=i;
			count++;
		}
		c=0;
	}
	average=(float)sum/count;
	printf("Sum of prime numbers upto 20=%d",sum);
	printf("\nAverage=%.3f",average);
	return 0;
}
