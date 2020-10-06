#include<stdio.h>
#include<conio.h>
#include<limits.h>
#include<stddef.h> 

void display(int *,int);
void delete(int *,int,int);
void insert(int *,int,int);
void search(int *,int,int);
int main()
{
	int size,func,i,ch;
 
	printf("Enter size of hash table\n");
	scanf("%d",&size);
 
	int arr[size];
 
	printf("Enter hash function [if mod 10 enter 10]\n");
	scanf("%d",&func);
 
	for(i=0;i<size;i++)
        arr[i]=NULL; 
 
	while(1)
    {
		printf(" 1. Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Search Element\n");
        printf("5.Exit\n");
        printf("Enter your choice\n");
		scanf("%d",&ch);
 
		switch(ch)
        {
			case 1:
				insert(arr,func,size);
				break;
			case 2:
				delete(arr,func,size);
				break;
			case 3:
				display(arr,size);
				break;
			case 4:
				search(arr,func,size);
				break;
			default:
				printf("Enter correct choice\n");
				break;
		}
	}
}
 
void insert(int arr[],int func, int size)
{
    int element,pos,count=0;
 
	printf("Enter key element to insert\n");
	scanf("%d",&element);
 	pos = element%func;
 
while(arr[pos]!= NULL) 
{  
		if(arr[pos]== -1)
            break;
		pos = (pos+1)%func;
		count++;
		if(count==size)
		break;     
	}
 
	if(count==size)
        printf("Hash table was full of elements\nNo Place to insert this element\n\n");
	else
        arr[pos] = element;    
}
 
void delete(int arr[],int func,int size)
{
	int element,count=0,pos;
 
	printf("Enter element to delete\n");
	scanf("%d",&element);
 
	pos = element%func;
 
	while(count<size)
    {
		if(arr[pos]==NULL)
        {
			printf("Element not found in hash table\n");
			break;
		}
		else if(arr[pos]==element){
			arr[pos]=-1;
			printf("Element deleted\n\n");
			break;
		}
		else{
			pos = (pos+1) % func;
		}
		count++;
	}
	if(--count==size)
        printf("Element not found in hash table\n");
}
 
void search(int arr[],int func,int size)
{
	int element,pos,count=0;
 
	printf("Enter element you want to search\n");
	scanf("%d",&element);
 
	pos = element%func;
 
	while(count++ != size){
		if(arr[pos]==element){
			printf("Element found at index %d\n",pos);
			break;
		}
		else
            if(arr[pos]==-1 ||arr[pos]!=NULL)
                pos = (pos+1) %func;
	}
	if(--count==size) printf("Element not found in hash table\n");
}
 
void display(int arr[],int size)
{
	int i;
 
	printf("Index\tValue\n");
 
	for(i=0;i<size;i++)
        printf("%d\t%d\n",i,arr[i]);
}
