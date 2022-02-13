#include <stdio.h>

int main()
{
    int entrada, a, b, soma = 0;
    scanf("%d", &entrada);
    for (int i = 0; i < entrada; i++)
    {
        scanf("%d %d", &a, &b);
        if (a < b)
        {
            for (int j = a + 1; j < b; j++)
            {
                if (j % 2 != 0)
                    soma += j;
            }
        }
        else if (a > b)
        {
            for (int j = b + 1; j < a; j++)
            {
                if (j % 2 != 0)
                    soma += j;
            }
        }
        printf("%d\n", soma);
        soma = 0;
    }
    return 0;
}