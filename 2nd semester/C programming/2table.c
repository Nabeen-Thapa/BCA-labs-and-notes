#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,j;
	printf("enter the number foe the table: ");
	scanf("%d",&num);
	printf("the table of %d is:",num);
	for(i=0;i<=10;i++)
	{
		printf("\n %d x %d = %d",num,i,num*i);
		}	
	return 0;
}
