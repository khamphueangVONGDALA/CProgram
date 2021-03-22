#include <stdio.h>
#define MAX_SIZE 100  
int main()
{
    int a[MAX_SIZE];
    int max, min,n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("%d %d", max,min);
    return 0;
}
