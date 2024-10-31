// 1 5 9 13 17 .....n
#include<stdio.h>
int main()
{
int n,i,b=1,a=1;
printf("enter the number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	b=a+4;
printf("%d",a);
printf(" ");
	a=b;
}
return 0;
}
