#include <stdio.h>

int main()
{
    int entrada, a, cont = 1;
    scanf("%d %d", &entrada, &a);

    for (int j = 1; j <= a / entrada; j++)
    {
        for (int i = 1; i <= entrada; i++)
        {
            if (i > 1)
                printf(" ");
            printf("%d", cont);
            cont++;
        }
        printf("\n");
    }

    return 0;
}