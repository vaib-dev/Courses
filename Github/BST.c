#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct btnode
{
    int data;
    struct btnode *left;
    struct btnode *right;
}*root = NULL, *temp = NULL, *t2, *t1;

void insert();
void inorder(struct btnode *t);
void search(struct btnode *t);

void main()
{
 int ch;
 
    printf("\nOPERATIONS ---");
    printf("\n1 - Insert an element into tree\n");
    printf("2 - Inorder Traversal\n");
    printf("3 - Exit\n");
    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:    
            insert();
            break;
        case 2:    
            inorder(root);
            break;
        case 3:
            exit(0);
        default :     
            printf("Wrong choice, Please enter correct choice  ");
            break;    
        }
    }
}
 
void insert()
{
	
	temp=(struct btnode *)malloc(sizeof(struct btnode));
	printf("Enter the data of  node");
	scanf("%d",temp->data);
	temp->right=NULL;
	temp->left=NULL;
    if (root == NULL) 
        root = temp;
    else    
        search(root);

}
void search(struct btnode *t)
{
    if ((temp->data > t->data) && (t->right != NULL))      
        search(t->right);
    else if ((temp->data> t->data) && (t->right == NULL))
        t->right = temp;
    else if ((temp->data < t->data) && (t->left != NULL))    
        search(t->left);
    else if ((temp->data < t->data) && (t->left == NULL))
        t->left = temp;
}

	
void inorder(struct btnode *t)
{
    if(root!=NULL) // checking if the root is not null
    {
        inorder(t->left); // visiting left child
        printf(" %d ", t->data); // printing data at root
        inorder(t->right);// visiting right child
    }
}