#include <stdio.h>
int main()
{
    int entrada, i = 1;
    scanf("%d", &entrada);
    while (i < 11)
    {
        printf("%d x %d = %d\n", i, entrada, i * entrada);
        i++;
    }

    return 0;
}
