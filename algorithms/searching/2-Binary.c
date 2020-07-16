#include<conio.h>
#include<stdio.h>
void main()
{
    int arr[40],n,i,j,k,se,first,last,mid,temp;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elements now");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

     for ( i=0; i<n-1; i++)
    {
        for ( j=0; j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    printf("\n Elements after sorting are:");
    for ( i=0; i<n; i++)
    {
        printf("\t %d",arr[i]);
    }
    // To remove duplicacy
     for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; )
        {
            if(arr[j] == arr[i])
            {
                for(k = j; k < n; k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }

printf("\nArray without dupicates");
     for(i = 0; i < n; i++)
    {
        printf("\t%d ", arr[i]);
    }
    printf("\nEnter the element to be searched");
    scanf("%d",&se);
    first=0;
    last=n;
    mid=(first+last)/2;
    while(first<last && arr[mid]!=se)
    {
        if (arr[mid]<se)
        {
            first=mid+1;

        }
        if (arr[mid]>se)
        {
            last=mid-1;

        }
        mid=(first+last)/2;

        
    }
    if(arr[mid]==se)
    printf("\nElment found at position: %d " ,mid);
    else
    {
        printf("\nElement not found");
    }
    
    
}