#include <stdio.h>

int main()
{
    int N, i, j;
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
        // Print first part
        for(j=i; j>1; j--)
        {
            printf("%d ", j);
        }
        // Print second part
        for(j=1; j<= (N-i +1); j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}
/*
12345
21234
32123
43212
54321
If you can notice, you can actually divide this in two parts to make things easier. Let me show.

-----
2----
32---
432--
5432-12345
-1234
--123
---12
----1*/
