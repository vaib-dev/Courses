#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
//**QUEUE OPERATIONS
typedef struct node
{
	int data;
	struct node *link;
	
}queue;
queue *f=NULL,*r=NULL;
main()
{
	int x,ch;
	printf("QUEUE OPERATIONS");
	printf("\n1.Insert");
	printf("\n2.Delete");
	printf("\n3. exit");
	while(1)
	{
		printf("\nenter choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\nEnter the number to be INSERTED::");
	        scanf("%d",&x);
	        insert(x);
	        break;
	        
	        case 2:
	        	x=delete();
	        	if(x!=NULL)
	        	printf("\nnumber deleted is %d",x);
	        	else
	        	{
	        		printf("empty");
	        		
				}
				break;
				case 3:
					exit(0);
				default:printf("WRONG INPUT");
				break;	
		}
	}
	
}

insert(int x)
{
	queue *temp;
	temp=(queue *)malloc(sizeof(queue));
	temp->data=x;
	temp->link=NULL;
	if(r!=NULL)
	{
		r->link=temp;
		r=temp;
	}
	else
	{
		f=temp;
		r=temp;
	
	}
	return;
}

int delete()
{
	int x;
	queue *p;
	if(f!=NULL)
	{
		x=f->data;
		p=f;
		f=f->link;
		free(p);
		
	}
	else
	{
		f=r=NULL;
		x=NULL;
		
	}
	return(x);
}
