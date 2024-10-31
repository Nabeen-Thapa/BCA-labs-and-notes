#include<stdio.h>

#define size 10
int push();
int pop();
int display();

int stack[size],top=-1;
int main()
{
	int value,choice;
	printf("\n-------menu--------\n");
	printf("\n1.push\n 2.pop\n3,display\n");
	printf("enter your choice");
	switch(choice)
	{
		case1:printf("enter a value to be inserted:");
		scanf("%d",&value);
		push(value++);
		
		
		break;
		case2:pop();
		break;
		case3:display();
		break;
	}
	int push(int value)
	{
		if(top==size-1)
		{
			printf("stack is full:");
			
		}
		else
		{ 
		top++;
		stack[top]=value;
		printf("\n insertion success");
			
		}
	}
	int pop()
	{
		if(top==-1)
		{
			printf("stack is full");
		}
		else
		{
			printf("deleted:%d",stack[top]);
			top--;
		}
	}
	}
}
