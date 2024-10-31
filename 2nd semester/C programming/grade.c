#include<stdio.h>
int main()
{
	int p;
	printf("renter your percentage: ");
	scanf("%d",&p);
	if(p<=100)
	{
	if(p>=90)
	{
		printf("your grade is A+");
	}
	else if(p>=80)
	{
		printf("your grade is A");
	}
	else if(p>=70)
	{
		printf("your grade is B+");
	}
	
	else if(p>=60)
	{
		printf("your grade is B");
	}
	else if(p>=50)
	{
		printf("your grade is C+");
	}
	else if(p>=40)
	{
		printf("your grade is C");
	}else if(p>=30)
	{
		printf("your grade is D+");
	}
	else if(p>=60)
	{
		printf("your grade is D");
		}
	else if(p>=60)
	{
		printf("your grade is E");
	}
}
else
{
printf("wrong entry");
}
return 0;
}
