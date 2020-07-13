//PROGRAM FOR SELECTION SORT
//This sorting algorithm is an in-place comparison-based algorithm in which the list is divided 
//into two parts, the sorted part at the left end and the unsorted part at the right end.
// Initially, the sorted part is empty and the unsorted part is the entire list.


#include<stdio.h>
#include<conio.h> 
int main()
{
    int i,j,n,loc,temp,min,arr[30];
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
 
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Elements before sorting:" );
    for ( i = 1; i < n; i++)
    {
        printf("\t %d",arr[i]);
    }
 
    for(i=0;i<n-1;i++)
    {
        min=arr[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                loc=j;
            }
        }
 
        temp=arr[i];
        arr[i]=arr[loc];
        arr[loc]=temp;
    }
 
    printf("\nSorted list is as follows");
    for(i=0;i<n;i++)
    {
        printf("\t%d ",arr[i]);
    }
}