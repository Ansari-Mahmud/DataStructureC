// Program to implement stack using C Programming
#include <stdio.h>
#define SIZE 5

int top =-1, stack[SIZE];
void push();
void pop();
void peek();
void isEmpty();
void isFull();
void display();

int main() 
{
	int choice;
	while(1)
	{
		printf("\nPerform operations on the Stack:");
		printf("\n1. Push an element in the Stack\n2. Pop an element from Stack\n3. Display all the elements from Stack\n4. Exit the Program\n");
		printf("\nEnter your Choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: 
				push();
				break;
			case 2:
				pop();
				break;
			case 3: 
				display();
				break;
			case 4:
				exit(0);
			default: 
				printf("\nSorry for invalid Input");
		}
	}
	return 0;
}
void push()
{
	int element;
	if(top == SIZE - 1)
		printf("\nStack is full!");
	else
	{
		printf("\nEnter the element to be inserted into the stack:");
		scanf("%d",&element);
		top = top + 1;
		stack[top]=element;
	}
}
void pop()
{
	if(top ==  -1)
		printf("\nStack is Empty!");
	else
	{
		printf("\nPopped element: %d",stack[top]);
		top = top - 1;
	}
}
void display()
{
	if(top == - 1)
		printf("\nStack is Empty!");
	else
	{
		printf("\nElements present in the Stack:\n");
		for(int i = 0; i < top; i++)
			printf("%d\n",stack[i]);
	}
}