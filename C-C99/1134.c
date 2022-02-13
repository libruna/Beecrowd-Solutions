#include <stdio.h>

int main()
{
    int entrada, tipo[4] = {0, 0, 0};

    scanf("%d", &entrada);
    while (entrada != 4)
    {
        switch (entrada)
        {
        case 1:
            tipo[0]++;
            break;
        case 2:
            tipo[1]++;
            break;
        case 3:
            tipo[2]++;
            break;
        default:
            break;
        }
        scanf("%d", &entrada);
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", tipo[0], tipo[1], tipo[2]);

    return 0;
}