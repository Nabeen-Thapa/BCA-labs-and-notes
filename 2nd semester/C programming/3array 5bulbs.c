//5 diff bulbs ,total stock
#include<stdio.h>
int main()
{
	int i, stock[5];
	float price[5];
	float total;
	for(i=0;i<5;i++)
	{
		printf("enter stock of bulb %d: ",i+1);
		scanf("%d",&stock[i]);
		printf("enter price of bulb %d: ",i+1);
		scanf("%f",&price[i]);
		total=total+stock[i]*price[i];
	}
	printf("the ttotal stock value is %f\n",total);
	return 0;
}
