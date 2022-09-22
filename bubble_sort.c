#include <stdio.h>

int main()
{
    int dizi[8] = {5, 6, 3, 2, 7, 8, 1, 4};

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", dizi[i]);
    }
    // Dizinin sıralanmamış hali için



    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (dizi[j] > dizi[j + 1])
            {
                int tmp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = tmp;
            }
        }
    }



    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", dizi[i]);
    }
    // dizinin siralanmis hali icin
    getch();
}