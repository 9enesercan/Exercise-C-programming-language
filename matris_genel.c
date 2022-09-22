#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void deger_ata(int satir, int sutun, int dizi[][sutun])
{
    srand(time(NULL));
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            dizi[i][j] = rand() % 90 + 10;
        }
    }
}

void dizi_yazdir(int satir, int sutun, int dizi[][sutun])
{
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            printf("%d\t", dizi[i][j]);
        }
        printf("\n\n");
    }
}

void satir_sirala(int satir, int sutun, int dizi[][sutun])
{
    for (int i = 0; i < satir; i++)
    {
        for (int k = 0; k < sutun; k++)
        {
            for (int j = 0; j < sutun - 1; j++)
            {
                if (dizi[i][j] > dizi[i][j + 1])
                {
                    int tmp = dizi[i][j];
                    dizi[i][j] = dizi[i][j + 1];
                    dizi[i][j + 1] = tmp;
                }
            }
        }
    }
}

void sutun_sirala(int satir, int sutun, int dizi[][sutun])
{
    for (int i = 0; i < sutun; i++)
    {
        for (int k = 0; k < satir; k++)
        {
            for (int j = 0; j < satir - 1; j++)
            {
                if (dizi[j][i] > dizi[j + 1][i])
                {
                    int tmp = dizi[j][i];
                    dizi[j][i] = dizi[j + 1][i];
                    dizi[j + 1][i] = tmp;
                }
            }
        }
    }
}

void transpoz_yazdir(int satir, int sutun, int dizi[][sutun])
{
    for (int i = 0; i < sutun; i++)
    {
        for (int j = 0; j < satir; j++)
        {
            printf("%d\t", dizi[j][i]);
        }
        printf("\n\n");
    }
}
int main()
{
    printf("Satir sayisini giriniz : ");
    int satir;
    scanf("%d", &satir);

    printf("Sutun sayisini giriniz : ");
    int sutun;
    scanf("%d", &sutun);

    int dizi[satir][satir];

    deger_ata(satir, sutun, dizi);

    dizi_yazdir(satir, sutun, dizi);

    satir_sirala(satir, sutun, dizi);

    printf("\n\nSatir sirali hali :\n");
    dizi_yazdir(satir, sutun, dizi);

    sutun_sirala(satir, sutun, dizi);

    printf("\n\nSatir ve sutun sirali hali :\n");
    dizi_yazdir(satir, sutun, dizi);

    printf("\n\nTranspozu alinmis hali :\n");
    transpoz_yazdir(satir, sutun, dizi);
}
