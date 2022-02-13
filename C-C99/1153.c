#include <stdio.h>

int main()
{
    int entrada, i, aux;
    scanf("%d", &entrada);
    aux = entrada;
    for (i = 1; i <= entrada; i++)
    {
        if (entrada != i)
            aux *= entrada - i;
    }
    printf("%d\n", aux);
    return 0;
}