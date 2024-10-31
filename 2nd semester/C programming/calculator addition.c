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
	printf("how many numbers you want to add: ");
	scanf("%d",&num);
	printf("\nenter the numbers: ");
	for(i=0;i<num;i++)
	{	
		scanf("%d",&number);
	  sum=sum+number;    
    }
		printf("\n sum of %d numbers = %d",num,sum);

}
