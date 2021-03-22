#include <stdio.h>
#include <math.h>

int main()
{
    int num, lastDigit, digits, sum, i, end;
    scanf("%d", &end);
    for(i=1; i<=end; i++)
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
