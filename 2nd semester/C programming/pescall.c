#include<stdio.h>
int main()
{
int i,j,sp,n,no;
printf("enter the num of rows: ");
scanf("%d",&no);
for(i=0;i<no;i++)
{
    for(sp=0;sp<(no-i);sp++)
    {
    printf(" ");
    }
   n=1;
    for(j=0;j<=i;j++)
    {
printf(" %d",n);

    n=n*(i-j)/(j+1);

    }
    printf("\n");
}
return 0;
}
