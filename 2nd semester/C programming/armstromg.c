#include<stdio.h>
#include<math.h>
int main()
{
	int num,n_num,rem,n,i=0,temp;
	printf(" enter the number: ");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
		n=num%10;
		n_num=n_num+pow(n,3);
		num=num/10;
	}
			if(n_num==temp)
	{
	printf(" Give number is armstrong");
}
	else
	{
		printf(" Given number is not armstrong");
	}
	return 0;
}
