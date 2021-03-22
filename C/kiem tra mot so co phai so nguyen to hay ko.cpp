#include <stdio.h>
#include <math.h>

int main()
{
    int originalNum, num, lastDigit, digits, sum;
    scanf("%d", &num);
    sum = 0;
    originalNum = num;
    digits = (int) log10(num) + 1;
    while(num > 0)
    {
        lastDigit = num % 10;
        sum = sum + round(pow(lastDigit, digits));
        num = num / 10;
    }
    if(originalNum == sum)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}
