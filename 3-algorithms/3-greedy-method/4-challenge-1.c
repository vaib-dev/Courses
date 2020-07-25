#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int size = sizeof(coins)/sizeof(coins[0]);
    printf("Array Size is::%d\n",size);
    int value, i;
    printf("Enter the amount in Rs:");
    scanf("%d",&value);
    if(value<=0)
    {
        printf("\nPlease enter amount greater than zero");

    }    
    else
    {
        findminCoins(coins,size,value);
    }
    
    
 
  
}

int findminCoins(int coins[], int size,  int value)
{
    int component[100],j,count=0,i;
    for(i=size-1;i>=0;i--)
    {

        while(value>=coins[i])
        {
            value=value-coins[i];
            component[j]=coins[i];
            j++;
            count++;
        }
    }
    printf("Notes u need are:\n");
    for(i=0;i<j;i++)
    {
       printf(" %d\t",component[i]);
    }
    printf("\n number of notes=%d",count);
}

