#include <stdio.h>
#include <time.h>
#include <math.h>

int tahmin(int altlimit, int ustlimit)
{
    int bilinmeyen, deger;

    printf("Tahmininizi giriniz:");
    scanf("%d", &deger);

    srand(time(NULL));
    bilinmeyen = altlimit + rand() % (ustlimit + 1);
    while (deger != bilinmeyen)
    {
        if (deger < altlimit || deger > ustlimit)
        {
            printf("seni sakaci limitlerin icinde kal ama\n\n");
            goto atla;
        }

        if (fabs(deger - bilinmeyen) <= 3)
            printf("sevginin gucu kadar cok sicak suan\n\nduygusallastim nedense\n\nneyse bir iki tane daha dene bulursun :)\n\n");
        else if (fabs(deger - bilinmeyen) > 3 && fabs(deger - bilinmeyen) <= 5)
            printf("o kadar sicaksin ki Adana sicagi bunun yaninda buz kalir\n\n");
        else if (fabs(deger - bilinmeyen) > 5 && fabs(deger - bilinmeyen) <= 10)
            printf("sicak sicak az kaldi\n\n");
        else if (fabs(deger - bilinmeyen) > 10 && fabs(deger - bilinmeyen) <= 20)
            printf("dokunsan yakmaz o derece\n\n");
        else if (fabs(deger - bilinmeyen) > 20 && fabs(deger - bilinmeyen) <= 50)
            printf("ee bu tam ice latte yapilcak sogukluk\n\n");
        else
            printf("-274 kelvin sen dusun artik :)\n\n");
    atla:
        printf("Yeni tahmininizi giriniz:");
        scanf("%d", &deger);
    }
    return printf("Tebrikler bizden catal bicak takimi kazandiniz yeeyyyyyyyyyyyyy\n");
}

int main()
{
    int alt, ust;
    printf("Alt limiti belirleyiniz:");
    scanf("%d", &alt);
    printf("Ust limiti belirleyiniz:");
    scanf("%d", &ust);
    tahmin(alt, ust);
}