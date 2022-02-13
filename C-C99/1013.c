#include <stdio.h>
#include <stdlib.h>
int main()
{
    int maior = -2312323, p;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &p);
        if (p > maior)
            maior = p;
    }

    printf("%d eh o maior\n", maior);
    return 0;
}