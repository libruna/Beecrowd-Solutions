#include <stdio.h>

int main()
{
    int entrada;
    double x, y, soma = 0, cont = 0;
    while (cont != 2)
    {
        scanf("%lf", &x);
        if (x < 0 || x > 10)
        {
            printf("nota invalida\n");
        }
        else
        {
            cont++;
            soma += x;
        }
    }
    printf("media = %.2lf\n", soma / cont);
    return 0;
}