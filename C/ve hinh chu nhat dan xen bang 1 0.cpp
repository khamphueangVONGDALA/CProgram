#include <stdio.h>

int main()
{
    int rows, cols, i, j, k;
    scanf("%d%d", &rows,&cols);
    k = 1;
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            if(k == 1)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            // If k = 1  then k *= -1 => -1
            // If k = -1 then k *= -1 =>  1
            k *= -1;
        }
        if(cols % 2 == 0)
        {
            k *= -1;
        }
        	printf("\n");
    }

    return 0;
}