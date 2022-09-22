#include <stdio.h>

int main()
{
    int islem;
bas:
    printf("\n*****ikilik hesap makinasi*****\n*********islem seciniz********* \n[1]ikilik tabandan onluk tabana\n[2]onluk tabandan ikilik tabana \n[3]cikis yap\nher islemde geri donmek icin -2 cikis icin -1 yazabilirsiniz\n");
    scanf("%d", &islem);
    switch (islem)
    {
    case 1:
        system("CLS");
        while (1)
        {
            int sayi, son = 1, i = 0, mod, deger = 0;
        loop3:
            printf("\niklik tabandaki sayiyi giriniz : ");
            scanf("%d", &sayi);
            if (sayi == -1)
                goto cikis;
            else if (sayi == -2)
            {
                system("CLS");
                printf("\ngeri donuldu\n");
                goto bas;
            }
            else if (sayi < 0)
            {
                printf("\nyanlis deger girildi");
                goto loop3;
            }
            while (sayi > 0)
            {
                son = 1;
                mod = sayi % 10;
                if (mod > 1 || mod < 0)
                {
                    printf("\nyanlis deger girildi");
                    goto loop3;
                }
                if (mod == 0 && i == 0)
                    goto loop2;
                if (i == 0)
                    goto loop1;
                if (mod == 0)
                    goto loop2;
                if (mod == 1)
                {
                    for (int a = i; a > 0; a--)
                    {
                        son *= 2;
                    }
                }
            loop1:
                deger += son;
            loop2:
                sayi /= 10;
                i++;
            }
            printf("%d", deger);
        }

        break;

    case 2:
        system("CLS");
        while (1)
        {

            int sayi, mode, deger = 0, kat = 1;

            printf("\nonluk tabandaki sayiyi giriniz : ");
            scanf("%d", &sayi);
            if (sayi == -1)
                goto cikis;
            else if (sayi == -2)
            {
                system("CLS");
                printf("\ngeri donuldu\n");

                goto bas;
            }
            while (sayi > 0)
            {

                mode = sayi % 2;
                sayi /= 2;
                deger += (kat * mode);
                kat *= 10;
            }
            printf("%d", deger);
        }
        break;

    case 3:
        system("CLS");
        printf("cikis yapildi :)");
        break;
    case -1:
        system("CLS");
    cikis:
        printf("cikis yapildi :)");
        break;
    default:
        printf("\nyanlis islem");
        goto bas;
    }
    return 0;
}