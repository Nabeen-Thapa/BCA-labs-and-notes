#include<stdio.h>
int main()
{
	int n[100],k,i,f=0;
	printf("how many nmbr you want to enter: ");
	scan("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the %d element of array: ",i+1);
		scanf("%d",&n[i]);
	}
	printf("\n enter the key element: ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(k==n[i])
		{
			f=1;
			break;
		}
		else
		
			f=0;
		}
		
	if(f==1)
	printf("\n %d was found in position in %d",k,i+1);
	else
	printf("not found");
	return 0;
}
