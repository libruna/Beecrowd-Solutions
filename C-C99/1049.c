#include <stdio.h>
#include <string.h>

int main()
{
    char nome1[80], nome2[80], nome3[80];
    scanf(" %[^\n]", nome1);
    scanf(" %[^\n]", nome2);
    scanf(" %[^\n]", nome3);
    if (strcmp(nome1, "vertebrado") == 0)
    {
        if (strcmp(nome2, "ave") == 0)
        {
            if (strcmp(nome3, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else if (strcmp(nome2, "mamifero") == 0)
        {
            if (strcmp(nome3, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else if (strcmp(nome1, "invertebrado") == 0)
    {
        if (strcmp(nome2, "inseto") == 0)
        {
            if (strcmp(nome3, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else if (strcmp(nome2, "anelideo") == 0)
        {
            if (strcmp(nome3, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}