#include <stdio.h>

int main()
{
    int entrada;
    scanf("%d", &entrada);
    while (entrada != 2002)
    {
        printf("Senha Invalida\n");
        scanf("%d", &entrada);
    }
    printf("Acesso Permitido\n");
    return 0;
}