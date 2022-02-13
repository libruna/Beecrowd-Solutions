#include <stdio.h>
int main()
{
    int entrada, i = 0, maior = -1, p;
    while (i < 101)
    {

        scanf("%d", &entrada);
        if (entrada > maior)
        {
            maior = entrada;
            p = i + 1;
        }
        i++;
    }
    printf("%d\n%d\n", maior, p);

    return 0;
}
