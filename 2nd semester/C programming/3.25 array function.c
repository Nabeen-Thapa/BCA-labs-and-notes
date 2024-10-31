//read 10 numbers in array and display using function
#include<stdio.h>
int sum(int a[]);
int main()
{
	int a[10],s,i;
	printf("enter 10 numbers: ");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	output (a);
	s=sum(a);
	printf("\nsum of array elements is = %d",s);
	return 0;
}
int sum(int a[])
{
	int i,s=0;
	for(i=0;i<10;i++)
	s+=a[i];
	return (s);
}
void output(int a[])
{
	int i;
	printf("\nthe elements of array are: ");
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
}
