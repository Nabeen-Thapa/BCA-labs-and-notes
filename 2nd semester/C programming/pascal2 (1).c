  #include<stdio.h>
int main()
{
int row,col,sp,n,no;
printf("enter the num of rows: ");
scanf("%d",&no);
for(row=0;row<no;row++)
{
    for(sp=0;sp<(no-row);sp++)
    {
    printf(" ");
    }
    n=1;
    for(col=0;col<=row;col++)
    {
printf(" %d",n);

    n=n*(row-col)/(col+1);

    }
    printf("\n");
}
return 0;
}
