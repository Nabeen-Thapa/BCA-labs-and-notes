#include<stdio.h>
#define N 10
int main()
{
	int n[N],i,pos=0,neg=0,even=0,odd=0;
	printf("enter %d numbers: ",N);
	for(i=1;i<=N;i++)
	scanf("%d",&n[i]);
	
for(i=1;i<=N;i++)
{
	if(n[i]>0)
		{
			pos++;	
			if(n[i]%2==0)
			{
				even++;
			}
			else
			{
				odd++;
			}
		}
		else
		{
			neg++;	
		}
		}
		printf("%d positive numbers",pos);
		printf("\n%d even numbers ",-even);
		printf("\n%d odd numbers",-odd);
		printf("\n%d negative numbers",neg);
				return 0;
	}
