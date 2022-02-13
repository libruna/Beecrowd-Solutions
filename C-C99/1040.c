#include <stdio.h>
int main()
{
    float a, b, c, d, n1, n2, n3, n4, y;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    n1 = a * 2;
    n2 = b * 3;
    n3 = c * 4;
    n4 = d * 1;
    float media = ((a * 2 + b * 3 + c * 4 + d * 1) / 10);
    printf("Media: %.1f\n", media);
    if (media < 5.0)
        printf("Aluno reprovado.\n");

    else if (media >= 7.0)
        printf("Aluno aprovado.\n");

    else
    {
        if (media >= 5.0 && media < 6.9)
            printf("Aluno em exame.\n");

        scanf("%f", &y);
        float p = ((media + y) / 2);

        printf("Nota do exame: %.1f\n", y);

        p >= 5.0 ? printf("Aluno aprovado.\n") : printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n", p);
    }

    return 0;
}