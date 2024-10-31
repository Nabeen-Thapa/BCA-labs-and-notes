copycontent.c
#include<stdio.h>
int main()
{
    struct record
    {
        int employee_id;
        char name[20];
        char designation[20];
        float salary;

    };
    struct record employee,t;
    struct record temp[100];
    FILE *fp;
    char ch;
    int count=0,i,j;
    fp=fopen("employee.dat","wb+");
    if(fp==NULL)
        printf("file not created");
    else
        printf("enter employee details");
    do
    {
        printf("enter id");
        scanf("%d",&employee.employee_id);
        printf("enter name:");
        scanf("%s",employee.name);
        printf("enter designation:");
        scanf("%s",employee.designation);
        printf("enter salary");
        scanf("%f",&employee.salary);
        fwrite(&employee,sizeof(struct record),1,fp);
        printf("do you want to add another record?(y/n)");
        scanf("\t%c",&ch);
            }
            while(ch!='n');
            rewind(fp);
            fread(&employee,sizeof(struct record),1,fp);
            while(!feof(fp))
            {
                temp[count]=employee;
                count++;
                fread(&employee,sizeof(struct record),1,fp);
            }

fclose(fp);
for(i=0;i<count-1;i++)
{
    for(j=0;j<count-1-i;j++)
    {

            if(temp[j].employee_id>temp[j+1].employee_id)
    {
        t=temp[j];
        temp[j]=temp[j+1];
        temp[j+1]=t;
    }
}

}
printf("sorted list is:\n");
for(i=0;i<count;i++)
{
 printf("employee id:%d\n",temp[i].employee_id);
 printf("name:%s\n",temp[i].name);
 printf("designation%s\n",temp[i].designation);

}
return 0;
}

