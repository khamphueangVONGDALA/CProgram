#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, digits, sum, i;
    int start, end;
    scanf("%d%d", &start,&end);
    for(i=start; i<=end; i++)
    {
        sum = 0;
        num = i;
        digits = (int) log10(num) + 1;
        while(num > 0)
        {
            lastDigit = num % 10;
            sum = sum + pow(lastDigit, digits);
            num = num / 10;
        }
        if(i == sum)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
