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