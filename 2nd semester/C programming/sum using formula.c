//calculator
#include<stdio.h>
#include<stdlib.h>
void sum();

int main()
{
	sum();
	return 0;
}
void sum()
{
	int num,i,number,sum=0,j;
	printf("\nenter the last numbers: ");
	scanf("%d",&num);
	sum=(num*(num+1))/2;
		printf("\n sum of  upto %d  = %d",num,sum);

}
