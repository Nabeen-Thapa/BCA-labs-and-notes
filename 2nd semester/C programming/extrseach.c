#include<stdio.h>
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
	
		if(k==ar[i])
		{
			printf("\n%d is in %d position",k,i+1);
			//break;
		}
	//	else
	//	{
	//		printf("\nnot found");
	//	}
	
	//if(flag==1)
//	printf("\n %d on %d position",k,i+1);
//	else
//	printf("\n not founded");
	return 0;
}
