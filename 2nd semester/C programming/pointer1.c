// pointer
#include<stdio.h>
int main()
{
	int a=10;
	int *b=&a;
	int **c=&b;
	int ***d=&c;
	printf("%d\n",a);
	printf("%d\n",*b);
	printf("%d\n",**c);
	printf("%d\n",***d);
	
	printf("%u\n",&a);
	printf("%u\n",b);
	printf("%u\n",*c);
	printf("%u\n",**d);
	
	//printf("%d\n",*b);
	
	
	return 0;
}
