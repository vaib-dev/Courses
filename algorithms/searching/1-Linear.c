#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100],n,i,j,k,se,found=0;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    printf("\n Enter the array elements now:\n");
    for(i=0;i<n;i++)
    {
        scanf("\t%d",&arr[i]);
    }
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
// To remove duplicacy
printf("Array without dupicates");
     for(i = 0; i < n; i++)
    {
        printf("\t%d ", arr[i]);
    }
    printf("\nEnter the elment to be searched:");
    scanf("%d",&se);
    i=0;
    while((i<=n)&&(found==0))
    {
        if(arr[i]==se)
        found=1;
        i++;
    }
    if(found==1)
    {
        printf("\nElement found at postion:%d",i);

    }
    else
    {
        printf("Element not found");
    }
    
}