#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    scanf("%d%d",&rows,&cols);
    for(i=1; i<=rows; i++)
    {
        for(j=i; j<=cols; j++)
        {
            printf("%d", j);
        }

        for(j=i; j>1; j--)
        {
            printf("%d", cols);
        }
        printf("\n");
    }

    return 0;
}
