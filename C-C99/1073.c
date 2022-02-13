#include <stdio.h>
int main()
{
    int a, cont = 0, cont2 = 0;
    int b;
    scanf("%d", &a);
    for (int i = 2; i <= a; i += 2)
    {
        printf("%d^2 = %d\n", i, i * i);
    }

    return 0;
}