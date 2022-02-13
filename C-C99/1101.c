#include <stdio.h>

int main()
{
    int entrada, a, b, soma = 0;
    scanf("%d %d", &a, &b);
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            for (int i = b; i <= a; i++)
            {
                if (i != b)
                    printf(" ");
                printf("%d", i);
                soma += i;
            }
            printf(" Sum=%d\n", soma);
        }
        else if (b > a)
        {
            for (int i = a; i <= b; i++)
            {
                if (i != a)
                    printf(" ");
                printf("%d", i);
                soma += i;
            }
            printf(" Sum=%d\n", soma);
        }
        soma = 0;

        scanf("%d %d", &a, &b);
    }
    return 0;
}