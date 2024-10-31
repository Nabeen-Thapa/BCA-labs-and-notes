// smallest and largest element in array
#include<stdio.h>
int main()
{
	int i,n;
	int small,large,a[50];
	printf("enter the value of n: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter the %d element: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("thr rlrmrnt are:");
		for (i=0;i<n;i++)
		printf("%d",a[i]);
		small=a[0];
		large=a[0];
			for (i=0;i<n;i++)
			{
			if(small>a[i]);
			small=a[i];
			if(large>a[i])
			large=a[i];
			
			}
			printf("%d and %d",small,large);
	return 0;
}
