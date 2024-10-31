//while loop demo ,sum 1 to 50
#include<stdio.h>
int main()
{
	int sum=0,i=1;
	while(i<=50)
	{
		sum+=i;
		i++;
	}
	printf("sum of the integers = %d",sum);
	return 0;
}
