#include <stdio.h>
#define N_TIMES 100


// Algoritmo 5
int cont_op; // global
int f(int n)
{
    int i, j, k, res = 0;
    for (i = 1; i <= n * n; i += 1)
    {
        for (j = 1; j <= i; j += 2)
        {
            for (k = n + 1; k <= 2 * i; k += i * j)
            {
                res = res + k + 1;
                cont_op++;
            }
        }
    }
    return res;
}
int main()
{
    int n;
    for (n = 0; n <= N_TIMES; n++)
    {
        cont_op = 0;
        f(n);
        printf("%d ; %d \n", n, cont_op);
    }
}
