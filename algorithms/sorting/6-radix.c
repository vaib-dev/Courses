//PROGRAM FOR RADIX SORT
//Radix Sort. Radix sort is an integer sorting algorithm that sorts data with integer 
//keys by grouping the keys by individual digits that share the same significant position and
// value (place value). Radix sort uses counting sort as a subroutine to sort an array of numbers.


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int getMax(int list[], int n) 
{
    int mx = list[0];
    int i;
    for (i = 1; i < n; i++)
        if (list[i] > mx)
            mx = list[i];
    return mx;
}

void countSort(int list[], int n, int exp) 
{
    int output[n];
    int i, count[10] = { 0 };

    for (i = 0; i < n; i++)
        count[(list[i] / exp) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--) 
	{
        output[count[(list[i] / exp) % 10] - 1] = list[i];
        count[(list[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++)
        list[i] = output[i];
}

void radixsort(int list[], int n) 
{
    int m = getMax(list, n);

    int exp;
    for (exp = 1; m / exp > 0; exp *= 10)
        countSort(list, n, exp);
}

void print(int list[], int n) 
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\t", list[i]);
}

int main()
{
    int list[50],i, n ;
	printf("Enter number of elments in the array:");
	scanf("%d",&n);
	printf("Enter the elements in the array");
	for ( i = 0; i < n; i++)
	{
		scanf("%d",&list[i]);

	}
    printf("List of numbers before sort: \n");
    for(i = 0; i<n; i++)
        printf("%d\t", list[i] );

    radixsort(list, n);

    printf("\n\nList of numbers after sort: \n");
    print(list, n);
    return 0;
}