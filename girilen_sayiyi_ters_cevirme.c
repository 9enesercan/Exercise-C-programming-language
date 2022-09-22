#include <stdio.h>
#include <math.h>

int terscevir_degiskenli(int girdi)
{
    int son, kat, sayac = 0, basamak = girdi;
    while (girdi > 0)
    {

        for (int i = 0; basamak > 0; i++, basamak /= 10)
        {
            kat = pow(10, i);
        }

        son += kat * (girdi % 10);
        girdi /= 10;
        kat /= 10;
    }
    return son;
}

void terscevir(int girdi)
{
    while (girdi > 0)
    {
        printf("%d", girdi % 10);
        girdi /= 10;
    }
}

int main()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    printf("%d", terscevir_degiskenli(sayi));
    printf("\n");
    terscevir(sayi);
}