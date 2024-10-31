#include<stdio.h>
int main()
{
	int num[100],i,j,n,temp;
	printf("how many numbers you want to sort: ");
	scanf("%d",&n);\
//	printf("\nenter elements of sort: ");
	for(i=0;i<n;i++)
	{
	printf("enter %d elements of sort: ",i+1);
	scanf("%d",&num[i]);
}
	printf("\n The number before sorting are: ");
	for(i=0;i<n;i++)
	printf("%d ",num[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(num[i]>num[j+1])
			{
				temp=num[i];
				num[i]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	printf("\n the numbers in ascending order are: ");
	for(i=0;i<n;i++)
	printf("%d ",num[i]);
	return 0;
}
