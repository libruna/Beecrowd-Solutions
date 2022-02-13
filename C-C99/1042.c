#include <stdio.h>

#define key(A) (A)
#define less(A, B) (key(A) < key(B))
#define exch(A, B)    \
    {                 \
        int temp = A; \
        A = B;        \
        B = temp;     \
    }
#define cmpexch(A, B)   \
    {                   \
        if (less(A, B)) \
            exch(A, B); \
    }

void insertionSort(int *v, int l, int r)
{
    for (int i = r - 1; i > l; i--)
    {
        cmpexch(v[i], v[i - 1]);
    }
    for (int i = l + 2; i < r; i++)
    {
        int j = i;
        int tmp = v[j];
        while (less(tmp, v[j - 1]))
        {
            v[j] = v[j - 1];
            j--;
        }
        v[j] = tmp;
    }
}

int main()
{
    int array[4];
    for (int i = 0; i < 3; i++)
        scanf("%d", &array[i]);

    int A = array[0], B = array[1], C = array[2];
    insertionSort(array, 0, 3);
    printf("%d\n%d\n%d\n", array[0], array[1], array[2]);
    printf("\n%d\n%d\n%d\n", A, B, C);
    return 0;
}