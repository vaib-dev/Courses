//STACK OPERATIONS
#include<conio.h>
#include<stdio.h>
#define MAX_SIZE 6
int stack[MAX_SIZE];
int top=NULL;
int main()
{
	int ch;
	int ele;
	printf("\n STACK OPERATIONS");
	printf("\n1. Push operation");
	printf("\n2. Pop operation");
	printf("\n3. exit ");
		
while(1)
{
		printf("\nEnter your choice ");
	    scanf("%d",&ch);

	switch(ch)
	{
		case 1:
			if(top==MAX_SIZE)
			{
				printf("\n stack overflow");
				return(0);
			}
			else
			{
			printf("\n enter the element");
			scanf("%d",&ele);
			push(ele);
		    }
		    break;
		    
		case 2:
		       ele=pop();
		    if(ele!=NULL)
		    {
			    printf("\n The number poped is %d",ele);
			}
			
		else
		     {
			    printf("\n stack is empty");
			}
			
		break;
			     
		case 3:
			exit(0);
			
		default:
		printf("\n enter the correct choice"); 
		break;  
}
}
}
	
	
	int push(int ele)
	{
		top=top+1;
		stack[top]=ele;
		return;
	}
  
  int pop()
  {
  	int ele;
  	if(top==NULL)
  	{
  	return(NULL);
    }
else
  	{
	
  	ele=stack[top];
  	top=top-1;
  	return(ele);
    }
  }
