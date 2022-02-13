#include <stdio.h>

#define Key(A) (A)
#define less(A, B) (Key(A) < Key(B))

int getSoma(maior, menor)
{
    int soma = 0, i;
    if (maior == menor && menor % 13 != 0)
        return menor;
    for (i = menor; i <= maior; i++)
        if (i % 13 != 0)
            soma += i;

    return soma;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int soma = less(a, b) ? getSoma(b, a) : getSoma(a, b);

    printf("%d\n", soma);
    return 0;
}