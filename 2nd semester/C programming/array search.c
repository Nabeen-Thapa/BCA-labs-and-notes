//array position searching
#include<stdio.h>
int main()
{
	int n,max[n],i,key,flag=0;
	printf("how many mun. you want enter:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the elements:");
	 	scanf("%d",&max[i]);
	}
		printf("enter the elements for search:");
		scanf("%d",&key);
		for(i=0;i<n;i++)
		{
			if(key==max[i])
			{
				flag=1;
				break;
			}
			if(flag==1)
			printf("\n %d was in %d possiton ",key,i+1);
			else
			{
				printf("not found");
				
			}
		}
		return 0;
}
