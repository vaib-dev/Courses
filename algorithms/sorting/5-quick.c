//PROGRAM FOR QUICK SORT
//Quick sort is a highly efficient sorting algorithm and is based on 
//partitioning of array of data into smaller arrays.	
#include <stdio.h>
#include<conio.h> 
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
	int arr[50],n,i;
	printf("How many elements?");
	scanf("%d",&n);
	printf("\nEnter array elements:");
	
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	quick_sort(arr,0,n-1);
	printf("\nArray after sorting:");
	
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
	return 0;		
}
 
void quick_sort(int arr[],int lb,int ub)
{
	int j;
	if(lb<ub)
	{
		j=partition(arr,lb,ub);
		quick_sort(arr,lb,j-1);
		quick_sort(arr,j+1,ub);
	}
}
 
int partition(int arr[],int lb,int ub)
{
	int v,i,j,temp;
	v=arr[lb];
	i=lb;
	j=ub+1;
	
	do
	{
		do
			i++;
			
		while(arr[i]<v&&i<=ub);
		
		do
			j--;
		while(v<arr[j]);
		
		if(i<j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}while(i<j);
	
	arr[lb]=arr[j];
	arr[j]=v;
	
	return(j);
}