#include<conio.h>\\checking
#include<stdlib.h>
#include<stdio.h>

struct node
{
    int data;
   struct node *right;
};
struct node *root=NULL;
void insert();
void delete(struct node *q);
void display(struct node *a);
void main()
{
    int ch;
    printf("1.Insert\n");
    printf("2.delete\n");
    printf("3.dispaly\n");
    printf("4.exit");
    while(1)
    {
        printf("\nENter your choice:");
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
            exit(0);
            default:
            printf("Enter correct choice");


        }
    }
}
void insert()
{
    struct node *temp;
    struct node *p;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data of node:");
    scanf("%d",&temp->data);
    temp->right=NULL;
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

    }

}
void delete(struct node *q)
{
    int d;
    struct node *x;
  printf("Enter the data to be deleted");
  scanf("%d",&d);
  q=root;
  if(q->data==d)
  {
      root=root->right;
      free(q);
      return;
  }
  while(q->data!=d)
  {
      x=q;
      q=x->right;

  }
  x->right=q->right;
  free(q);  
}
void display(struct node *a)
{
    a=root;
    while(a!=NULL)
    {
        printf("%d--->",a->data);
        a=a->right;
    }

}