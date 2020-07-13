//PROGRAM FOR INSERTION SORT
//Insertion sort is based on the idea that one element from the input elements is 
//consumed in each iteration to find its correct position i.e, the position to which it belongs 
 //in a sorted array.It iterates the input elements by growing the sorted array at each iteration.


#include<conio.h>
#include<stdio.h>
void main()
{
    int i,n,arr[100],temp,j,loc;
    printf("\nEnter the number of elements");
    scanf("%d",&n);
    printf("\n Enter the elements in the array");
    for(i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n Elements brfore sorting are:");
    for(i=1;i<n;i++)
    {
       printf("\t%d",arr[i]);

    }
    for(i=2;i<n;i++)
    {
        temp=arr[i];
        loc=i-1;
        while ((temp<arr[loc])&&(loc>=1))
        {
          arr[loc+1]=arr[loc];  
            loc=loc-1;
        }
        arr[loc+1]=temp;
    }
    printf("\n List after sorting is:");
    for(i=1;i<n;i++)
    {
       printf("\t%d",arr[i]);

    }

}