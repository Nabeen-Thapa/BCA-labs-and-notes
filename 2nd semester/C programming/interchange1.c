#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter the numbers to interchange: ");
   scanf("%d%d",&a,&b);
   c=a;
   a=b;
   b=c;
   printf("the interchanged value of entered num: %d %d",a,b);
   return 0;
}
   
