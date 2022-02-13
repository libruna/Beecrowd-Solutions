#include <stdio.h>
int main()
{
    int a, cont = 0, cont2 = 0;
    int b;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        scanf("%d", &b);
        if (b >= 10 && b <= 20)
        {
            cont++;
        }
        else if (a < 10 || a > 20)
        {
            cont2++;
        }
    }
    printf("%d in\n", cont);
    printf("%d out\n", cont2);
    return 0;
}