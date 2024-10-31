//smallest and largest element of array
#include<stdio.h>
int main()
{
	int i,n,small,large,a[50];
	printf("enter the no. of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the %d th element:",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nthe elements are:");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	small=a[0];
	large=a[0];
	for(i=0;i<n;i++)
	{
		if(small>a[i])
   		small=a[i];
   		if(large<a[i])
   		
    large=a[i];
	}
	printf("\nsmallest=%d \n largest=%d",small,large);
	return 0;
}
