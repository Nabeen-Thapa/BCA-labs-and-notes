#include<stdio.h>
#include<math.h>
#define N 10
int main()
{
int a[N],i,p=0,n=0,z=0;
//printf("how many numbers you want to enter: ");
//scanf("%d",&N);
printf("enter the numbers: ");
for(i=0;i<N;i++)
scanf("%d",&a[i]);  
for(i=0;i<N;i++)
{
if(a[i]>0)
{
	p++;
	}	
	else
	{
		n++;
	}
	printf("\n positive : %d \n negative: %d",p,n);
}
	return 0;
	}
