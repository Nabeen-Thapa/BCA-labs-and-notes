#include<stdio.h>
int main()
{
	int x=1;
	loop1:
	printf("%d ",x);
	x++;
	if(x<10)
	goto loop1;
	return 0;
}
