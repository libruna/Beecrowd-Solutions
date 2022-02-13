#include <stdio.h>
int main()
{
    int p = 0, imp = 0, positivo = 0, negativo = 0;
    int a;
    for (int i = 1; i <= 5; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            p++;
        }
        if (a > 0)
        {
            positivo++;
        }
        if (a < 0)
        {
            negativo++;
        }
        if (a % 2 == 1 || a % 2 == -1)
        {
            imp++;
        }
    }
    printf("%d valor(es) par(es)\n", p);
    printf("%d valor(es) impar(es)\n", imp);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}