#include <stdio.h>

int main()
{
    int entrada = 0, cont1 = 1;
    scanf("%d", &entrada);
    for (int i = 0; i < entrada; i++)
    {
        printf("%d %d %d PUM\n", cont1, cont1 + 1, cont1 + 2);
        cont1 += 4;
    }
    return 0;
}