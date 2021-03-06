#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main()
{
    int arr[MAX_SIZE]; // Declares an array of size 100
    int size;          // Total number of elements in array
    int i, j, k;       // Loop control variables
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                for(k=j; k<size; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    for(i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
