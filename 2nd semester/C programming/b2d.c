//binary to drcimal
#include<stdio.h>
#include<math.h>
int main()
{
int num,rem,bin,i;
i=0;bin=0;
printf("number: ");
scanf("%d",&num);
do
{
	rem=num%2;
	num=num/2;
	bin=bin+rem*pow(10,i);
	i++;
}
while(num>0);

printf("num in binary is %d ",bin);
 
 return 0;
}
