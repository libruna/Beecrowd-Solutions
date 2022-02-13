#include <stdio.h>
int main()
{
    int k = 0;
    double a;
    for (int i = 1; i <= 6; i++)
    {
        scanf("%lf", &a);
        if (a > 0)
        {
            k++;
        }
    }
    printf("%d valores positivos\n", k);

    return 0;
}