#include <stdio.h>

int main()
{
    int entrada, j, i;
    scanf("%d", &entrada);
    for (i = 0; i < 1000; i++)
        printf("N[%d] = %d\n", i, j = i % entrada);
    return 0;
}