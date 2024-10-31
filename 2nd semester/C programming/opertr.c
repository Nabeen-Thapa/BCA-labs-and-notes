#include<stdio.h>
#include<math.h>
int main()
{
	int s;
	printf("enter \n 1 for add \n 2 for sub");
	scanf("%c",&s);
	switch(s);{
	case1:
		{
		int a,b,area;
		printf("enter value: ");
		scanf("%d%d",&a,&b);
		area=a+b;
		printf("the sum is %d",area);
		break;
	}
		case 2:
			{
				int a,b,area1;
				printf("enter value: ");
		scanf("%d%d",&a,&b);
		area1=a-b
		printf("the sum is %d",area1);
		break;
	}
		default:
			{
		printf("wrong");
		break;
	}
}
return 0;
}
