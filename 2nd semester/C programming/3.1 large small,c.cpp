#include<stdio.h>
int main()
{
	int i,n,a,small,large;
	printf("enter the value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d element of array: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n The element of an array are: ");
	for(i=0i<n;i++)
	printf("%d ",a[i]);
	small=a[0];
	large=a[0];
	for(i=0i<n;i++)
	{
		if(small>a[i])
		small=a[i];
		if(large<a[i])
		large=a[i];
	}
	printf("the smallest elements = %d \n The largest elenment = %d",small, large);
}
