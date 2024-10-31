#include<stdio.h>
int main()
{
	int time;
	printf("enter the time(1-24): ");
	scanf("%d",&time);
	if(time<=24)
	{
	if(time<12)
	{
		printf("  its A.M.");
	}
	else if(time==12)
	{
		printf("  its noon");	
	}
	else if(time>12)
	{
		printf("  its P.M.");	
	}
	else if(time==24)
	{
		printf("its midnight");	
	}	
}
else
{
printf("  wrong entry");
}
return 0;
}
