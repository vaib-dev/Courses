// PROGRAM FOR COUNT SORT
//Counting sort is a stable sorting technique, which is used to sort objects 
//according to the keys that are small numbers. It counts the number of keys whose key values are same.

#include<conio.h>
#include<stdio.h>

void main()
{
    int arr[10],n,i,max=0;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("\nEnter elements:");
                  
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
     if(arr[i]>max)
      max=arr[i];
    }
    printf("%d",max);
     
    counting_sort(arr,n,max);
}

counting_sort(int arr[],int n,int max)
{
     int count[10]={0};
     int i,j;
     
     for(i=0;i<n;i++)
      count[arr[i]]=count[arr[i]]+1;
      
     printf("\nSorted elements are:");
     
     for(i=0;i<=max;i++)
      for(j=1;j<=count[i];j++)
       printf("%d ",i);
}