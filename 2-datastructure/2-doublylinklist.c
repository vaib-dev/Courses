#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
   struct node *right;
   struct node *left;
};
struct node *temp;
struct node *root=NULL;
void insert();
void delete(struct node *q);
void length(struct node *l);
void display(struct node *a);
void main()
{
    int ch;
    printf("1.Insert\n");
    printf("2.delete\n");
    printf("3.dispaly\n");
    printf("4.Length\n");
    printf("5.exit\n");
    while(1)
    {
        printf("ENter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insert();
            break;
            case 2:
            delete(root);
            break;
            case 3:
            display(root);
            break;
            case 4:
            length(root);
            break;
            case 5:
            exit(0);
            default:
            printf("Enter correct choice");


        }
    }
}
void insert()
{
    struct node *p;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data of node");
    scanf("%d",&temp->data);
    temp->right=NULL,temp->left=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        p=root;
        while(p->right!=NULL)
        {
            p=p->right;

        }
        p->right=temp;
        temp->left=p;

    }
}

void delete(struct node *q)
{
    struct node *x;
    int d;
    printf("Enter the data to delete:");
    scanf("%d",&d);
    q=root;
    if(root==NULL)
    {
        printf("NO element to delete");
        return;

    }
    if(q->data==d)
    {
        root=root->right;
        free(q);
        return;
    }
    while(q->data!=d)
    {
        x=q;
        q->right;

    }
    q->right->left=x->left;
    x->left->right=q->right;
}
void display(struct node *a)
{
    a=root;
    while(a!=NULL)
    {
        printf("%d-->",a->data);
        a=a->right;
    }
}
void length(struct node *l)
{
    int count;
    l=root;
    while(l!=NULL)
    {
        count++;
        l=l->right;
    }
    printf("%d",count);
}