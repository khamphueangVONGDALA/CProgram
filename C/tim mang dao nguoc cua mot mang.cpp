#include <stdio.h>
#define MAX_SIZE 100      // Defines maximum size of array

int main()
{
    int arr[MAX_SIZE];
    int size, i;
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = size-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
