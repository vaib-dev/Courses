#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int coins[] = {1,2,5,10,20,50,100,500,1000,5000,10000,100000,1000000};
    int size = sizeof(coins)/sizeof(coins[0]);
    printf("Size is::%d\n",size);
    int value, i;
    printf("Enter the amount in Rs:");
    scanf("%d",&value);
    if(value<=0)
    {
        printf("\nWrong input");

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
    for(i=0;i<j;i++)
    {
       printf(" %d",component[i]);
    }
    printf("\n number of notes=%d",count);
}

