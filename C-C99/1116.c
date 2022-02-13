#include <stdio.h>

int main()
{
    int entrada;
    double x, y;
    scanf("%d", &entrada);
    for (int i = 0; i < entrada; i++)
    {
        scanf("%lf %lf", &x, &y);
        if (y != 0)
            printf("%.1lf\n", x / y);
        else
            printf("divisao impossivel\n");
    }
    return 0;
}