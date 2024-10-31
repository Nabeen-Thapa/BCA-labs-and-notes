#include<stdio.h>
#include<math.h>
int main()
{
	int p,l;
	printf("enter the profit and loss: ");
	scanf("%d%d",&p,&l);
	if(p>l)
	{
	printf("its profit");
}
	else
	{
	printf("its loss");	
	}
	return 0;
}
