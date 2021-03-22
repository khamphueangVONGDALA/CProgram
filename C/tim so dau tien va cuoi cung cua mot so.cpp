#include <stdio.h>
#include <math.h>

int main()
{
    int n, firstDigit, lastDigit, digits;
    scanf("%d", &n);
    lastDigit = n % 10;     
    digits = (int)log10(n); 
    firstDigit = (int)(n / pow(10, digits)); 
    printf("%d %d", firstDigit,lastDigit);
    return 0;
}



/*#include <stdio.h>

int main()
{
    int n, lastDigit;
    scanf("%d", &n);
    lastDigit = n % 10;
    printf("Last digit = %d", lastDigit);
    return 0;
}*/


/*#include <stdio.h>

int main()
{
    int n, first;
    scanf("%d", &n);
    first = n;
    while(first >= 10)
    {
        first = first / 10;
    }
    printf("First digit = %d", first);
    return 0;
}*/



