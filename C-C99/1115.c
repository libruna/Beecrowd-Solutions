#include <stdio.h>

int main()
{
    int entrada, x, y;
    scanf("%d %d", &x, &y);
    while (x != 0 && y != 0)
    {
        if (x > 0 && y > 0)
        {
            printf("primeiro\n");
        }
        else if (x > 0 && y < 0)
        {
            printf("quarto\n");
        }
        else if (x < 0 && y < 0)
        {
            printf("terceiro\n");
        }
        else if (x < 0 && y > 0)
        {
            printf("segundo\n");
        }
        scanf("%d %d", &x, &y);
    }
    return 0;
}