#include <stdio.h>
int main()
{
    double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a + b > c && a + c > b && c + b > a)
    {
        a += b + c;
        printf("Perimetro = %.1lf\n", a);
    }
    else
    {
        a = .5 * (a + b) * c;
        printf("Area = %.1lf\n", a);
    }
    return 0;
}