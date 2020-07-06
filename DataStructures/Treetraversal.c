#include<stdio.h>
#include<stdlib.h>
 
typedef struct BST
{
	int data;
	struct BST *left;
	struct BST *right;
    
}node;

node *temp;
node *root; 
void create();
void insert();
void preorder(node *);
void inorder(node *);
void postorder(node *);
void search(node *,node *); 
int main()
{
	char ch;
printf("\n\n1.Insert a new number");
printf("\n\n2.Preorder");
printf("\n\n3.Postorder");
printf("\n\n4.Inorder");
while(1)
{
    printf("\n\nEnter your choice::");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    insert();        
        break;
    case 2:
    preorder(root);
        break;
    case 3:
    postorder(root);
         break;
    case 4:
    inorder(root);
         break;   
    default:
    printf("Enter correct choice :)");
        break;
    }
}
}

void insert()
{
        create();
    if (root == NULL) 
        root = temp;
    else    
        search(root,temp);   
}
 
void create()
{
	printf("\nEnter data:");
	temp=(node*)malloc(sizeof(node));
	scanf("%d",&temp->data);
	temp->left=temp->right=NULL;
	
}
 

void search(node *x,node *t)
{
	if(t->data<x->data)
	{
		if(x->left!=NULL)
			search(x->left,t);
		else
			x->left=t;
	}
	
	if(t->data>x->data)
	{
		if(x->right!=NULL)
		 search(x->right,t);
		else
			x->right=t;
	}
}
 
void preorder(node *c)
{
        if (c == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    printf("%d -> ", c->data);
    if (c->left != NULL)    
        preorder(c->left);
    if (c->right != NULL)    
        preorder(c->right);
}
void inorder(node *t)
{
    if (t == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if (t->left != NULL)    
        inorder(t->left);
    printf("%d-> ", t->data);
    if (t->right != NULL)    
        inorder(t->right);
}
void postorder(node *t)
{
    if (t == NULL)
    {
        printf("No elements in a tree to display ");
        return;
    }
    if (t->left != NULL) 
        postorder(t->left);
    if (t->right != NULL) 
        postorder(t->right);
    printf("%d-> ", t->data);
}
 