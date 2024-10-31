#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5]={1,2,3,4,5}, *p[5],i;
	for(i=0; i<5;i++){
		p[i]=&a[i];
		printf("\n p[%d]=%d", i,*p[i]);
		return 0;
	}
}
