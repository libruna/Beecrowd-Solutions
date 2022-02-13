#include <stdio.h>
int main()
{
    int j = 60, i = 1;
    while (j >= 0)
    {
        printf("I=%d J=%d\n", i, j);
        j -= 5;
        i += 3;
    }

    return 0;
}
