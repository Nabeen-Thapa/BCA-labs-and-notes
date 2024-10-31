#include<stdio.h>
int main()
{
	int a[5],sum=0,i;
	printf("enter the elements: ");
	for(i=0;i<5;i++)
{
	scanf("%d",&a[i]);
}
printf("sum of array : ");
for(i=0;i<5;i++)
{
	sum=sum+a[i];
} 
printf("%d",sum);
return 0;
}
