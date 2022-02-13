#include <stdio.h>
int main()
{
    double i, j, d = 1;
    int cont = 0;
    for (i = 0; i <= 2; i += 0.2)
    {
        for (j = d; cont != 3; j++)
        {
            cont++;
            printf("I=%g J=%g\n", i, j);
        }
        cont = 0;
        d += 0.2;
    }
    return 0;
}
