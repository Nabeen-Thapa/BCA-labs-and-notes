#include<stdio.h>
//#define N 5
int main()
{
	int i,n,ar[100],k,flag=0;
	printf("how many numbers you want: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the %d elements: ",i+1);
	scanf("%d",&ar[i]);
}
	printf("enter key: ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(k==ar[i])
		{
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	printf("\n %d on %d position",k,i+1);
	else
	printf("\n not founded");
	return 0;
}