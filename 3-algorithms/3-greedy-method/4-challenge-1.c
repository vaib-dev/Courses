#include<stdio.h>
#include<conio.h>

int main()
{
    int coins[] = {1,2,5,10,20,50,100,500,1000};
    int value, i;
    printf("Enter the amount:");
    scanf("%d",&value);

    int size = sizeof(coins)/sizeof(coins[0]);

    findminCoins(coins,size,value);
    

}

int findminCoins(int coins[], int size,  int value)
{
    int i,countt=0, count = 0,arr=2;
    int low=coins[0];
    int high=coins[size-1];

        while(low<high)
        {
           int amount=low+high;
        if(amount==value)
        {
        printf("U need %d and %d note",high,low);
        break;
        }
        else if(amount<value)
        {
            low=coins[count+1];
            count++;
        }
        else if(amount>value)
        {
            high=coins[size-arr];
        arr++;
        }
        if(value == 0)
            break;
        }

}

