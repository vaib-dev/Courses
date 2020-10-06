#include<conio.h>
#include<stdio.h>
void main()
{
    int arr[100],n,i;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("\nEnter the elments of the array:");
    for (i=1;i<=n;i++)
    {
        scanf("\t %d",&arr[i]);

    }
    printf("\nElements before sorting:");
     for (i=1;i<=n;i++)
    {
        printf("\t %d",arr[i]);

    }

    divide(arr,1,n);
    printf("\n Elements after sorting:");
    for(i=1;i<=n;i++)
    {
        printf("\t %d",arr[i]);
    }

}

divide(int arr[],int first,int last)
{
    int mid;
    if(first<last)
    {
        mid=(first+last)/2;
        divide(arr,first,mid);
        divide(arr,mid+1,last);
        mergesort(arr,first,mid,last);
    }
}

mergesort(int arr[],int first,int mid,int last)
{
    int i,j,k,new[100];
    i=first;
    j=mid+1;
    k=first;

    while (i<=mid && j<=last)
    {
        if(arr[i]<arr[j])
        {
            new[k]=arr[i];
            i++;
            k++;

        }
        else
        {
            new[k]=arr[j];
            k++;
            j++;

        }
        
    }
    while (i<=mid)
    {
        new[k]=arr[i];
        k++;
        i++;
    }
    while(j<=last)
    {
        new[k]=arr[j];
        k++;
        j++;

    }
    for(i=first;i<=last;i++)
    {
        arr[i]=new[i];
    }
    
}
