
#include <stdio.h>
#define MAX_SIZE 1000  // Maximum size of the array

void printArray(int arr[], int len);
int main()
{
    int arr[MAX_SIZE];
    int even[MAX_SIZE], odd[MAX_SIZE];
    
    int evenCount, oddCount;
    int i, size;
    scanf("%d", &size);
    /* Input elements in array */
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    evenCount = 0;
    oddCount = 0;

    for(i=0; i<size; i++)
    {
        // If arr[i] is odd
        if(arr[i] & 1)
        {
            odd[oddCount] = arr[i];
            oddCount++;
        }
        else
        {
            even[evenCount] = arr[i];
            evenCount++;
        }
    }

    printArray(even, evenCount);

    printArray(odd, oddCount);
    return 0;
}

void printArray(int arr[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
