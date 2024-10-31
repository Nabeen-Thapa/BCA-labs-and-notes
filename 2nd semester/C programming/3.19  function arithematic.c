//arithematic function 
#include<stdio.h>
void add(int x,int y,int a,int b)
{
printf("The addition of the complex number is: %d + i%d\n",x+a,y+b);
}
void sub(int x,int y,int a,int b)
{
printf("The subtraction of the complex number is: %d + i%d\n",x-a,y-b);
}
void mul(int x,int y,int a,int b)
{
	int real,img;
	real=(a*x-b*y);
	img=(a*y+b*x);
printf("The multiplication of the complex number is: %d + i%d\n",real,img);
}
int main()
{
	int x,y,a,b;
	printf("enter the 1st complex number of the form(x+iy):");
	scanf("%d+i%d",&x,&y);
	printf("enter the 2nd complex number of the form(a+ib):");
	scanf("%d+i%d",&a,&b);
	add(x,y,a,b);
	sub(x,y,a,b);
	mul(x,y,a,b);
	return 0;
}
