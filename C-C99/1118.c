#include <stdio.h>

int main()
{
    int entrada, cont = 0, a, cont2 = 0;
    double x, y, soma = 0;
    while (1)
    {
        scanf("%lf", &x);
        if (x < 0 || x > 10)
        {
            cont++;
            printf("nota invalida\n");
        }
        else
        {
            cont2++;
            soma += x;
            if (cont2 % 2 == 0)
            {
                printf("media = %.2lf\n", soma / 2);
                soma = 0;
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &a);
                while (a != 2 && a != 1)
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                    scanf("%d", &a);
                }
                if (!(a == 1))
                    break;
            }
        }
    }

    return 0;
}