#include <stdio.h>

#define Key(A) (A)
#define less(A, B) (Key(A) < Key(B))

int main()
{
    int a, b, soma = 0, i, maior, menor;
    scanf("%d %d", &a, &b);
    if (!less(a, b))
    {
        maior = a;
        menor = b;
    }
    else
    {
        maior = b;
        menor = a;
    }

    for (i = menor + 1; i < maior; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}