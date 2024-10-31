#include<stdio.h>
int main()
{
	int i,n;
	int small,large,a[50];
	printf("enter value of n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++);
	{
		printf("\n enter the %d th elements of an array: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n The element of an array are: ");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	small=a[0];
	large=a[0];
	for(i=1;i<n;i++);
}
	{
		if(small>a[i])
 		small=a[i];
 		if(large<a[i])
 		large=a[i];
	}
	printf("\n The smallest element = %d and the largest element is = %d ",small,large);
	return 0;
}
