#include <stdio.h>
#include <math.h>

int main()
{
    int islem, cikis = 0;
    int sayi,mod,deger;
    do
    {
        printf("\n*****ikilik hesap makinasi*****\n*********islem seciniz********* \n[1]ikilik tabandan onluk tabana\n[2]onluk tabandan ikilik tabana \n[3]cikis yap\nher islemde geri donmek icin -2 cikis icin -1 yazabilirsiniz\n");
        scanf("%d", &islem);
        switch (islem)
        {
        case 1:
            system("CLS");
            int basamak = 0;
            while (1)
            {
                int kontrol = 1;
                basamak = 0, deger = 0;
                printf("\niklik tabandaki sayiyi giriniz : ");
                scanf("%d", &sayi);

                if (sayi >= 0)
                {
                    while (sayi > 0)
                    {
                        mod = sayi % 10;
                        if (!(mod == 1 || mod == 0))
                        {
                            printf("\nyanlis deger girildi");
                            kontrol = 0;
                            break;
                        }

                        if (mod == 1)
                        {
                            deger += pow(2, basamak);
                        }
                        basamak++;
                        sayi /= 10;
                    }

                    if (kontrol == 1)
                    {
                        printf("%d", deger);
                    }
                }
                else if (sayi == -2)
                {
                    system("CLS");
                    printf("\ngeri donuldu\n");
                    break;
                }
                else if (sayi == -1)
                {
                    cikis = 1;
                    break;
                }
                else
                {
                    printf("\nyanlis deger girildi\n");
                }
            }
            break;

        case 2:

            system("CLS");
            int kat;

            while (1)
            {
                kat = 1, deger = 0;
                printf("\nonluk tabandaki sayiyi giriniz : ");
                scanf("%d", &sayi);

                if (sayi >= 0)
                {
                    while (sayi > 0)
                    {
                        mod = sayi % 2;
                        sayi /= 2;
                        deger += (kat * mod);
                        kat *= 10;
                    }
                    printf("%d", deger);
                }
                else if (sayi == -2)
                {
                    system("CLS");
                    printf("\ngeri donuldu\n");
                    break;
                }
                else if (sayi == -1)
                {
                    cikis = 1;
                    break;
                }
                else
                {
                    printf("\nyanlis deger girildi\n");
                }
            }

            break;

        case 3:
            cikis=1;
            break;

        default:
            system("CLS");
            printf("\nyanlis islem\n");
            break;
        }

    } while (cikis == 0);
}