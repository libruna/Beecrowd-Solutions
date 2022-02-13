#include <stdio.h>
int main()
{
    int j, i, d = 7, cont = 0;
    for (i = 1; i < 10; i += 2)
    {
        for (j = d; cont != 3; j--)
        {
            cont++;
            printf("I=%d J=%d\n", i, j);
        }
        cont = 0;
        d += 2;
    }
    return 0;
}
