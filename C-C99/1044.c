#include <stdio.h>

#define Key(A) (A)
#define less(A, B) (Key(A) < Key(B))
int main()
{
    int a, b, maior, menor;
    scanf("%d %d", &a, &b);
    if (a == b)
    {
        printf("Sao Multiplos\n");
        return 0;
    }
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

    !(maior % menor) ? printf("Sao Multiplos\n") : printf("Nao sao Multiplos\n");

    return 0;
}