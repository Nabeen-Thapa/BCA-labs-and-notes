//sorting using function
#include<stdio.h>
int sort(int);
int main()
{
	int nums[100],i,j,n,temp,s;
	printf("howmany numbers you want sort: ");
	scanf("%d",&n);
	printf("before sort: ");
	for(i=0;i<n;i++)
	{
	printf("%d ",nums[i]);
}
s=sort(nums[i]);
printf("after sort");
for(i=0;i<n;i++)
	printf("%d ",s);
	return 0;
}
int sort(int nums)
{
int temp,nums[100],i,j,n;
for(i=0;i<n-1;i++)
{
for(j=0;j<n;j++)
{
	if(nums[i]>nums[j])
	{
		temp=nums[i];
		nums[i]=nums[j];
		nums[j]=temp;
	}
	}	
}
}
