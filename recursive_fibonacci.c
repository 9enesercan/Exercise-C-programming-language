#include <stdio.h>

int fibo(int x)
{
    if (x <= 1)
    {
        return 1;
    }

    return fibo(x - 1) + fibo(x - 2);
}
int main()
{
    printf("Kac terimli olsun: ");
    int tersay;
    scanf("%d", &tersay);
    for (int i = tersay; i > 0; i--)
    {
        printf("%d ", fibo(i));
    }
}