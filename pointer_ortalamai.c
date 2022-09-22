#include <stdio.h>
#include <math.h>

void ortalamayayakinibul(float *ort_p, int *elm_p, int *ids_p, int dizi[])
{
    float toplam = 0;
    for (int i = 0; i < 9; i++)
    {
        toplam += dizi[i];
    }
    *ort_p = toplam / 9.0;

    int enk_fark = fabs(*ort_p - dizi[0]);

    for (int i = 0; i < 9; i++)
    {
        if (enk_fark > fabs(*ort_p - dizi[i]))
        {
            enk_fark = fabs(*ort_p - dizi[i]);
            *ids_p = i;
        }
    }

    *elm_p = dizi[*ids_p];
}
int main()
{
    int dizi[9] = {9, 7, 3, 4, 11, 67, 25, 56, 34};
    int indis;
    int eleman;
    float ortalama;

    ortalamayayakinibul(&ortalama, &eleman, &indis, dizi);
    printf("Ortalama: %.2f\n", ortalama);
    printf("En yakin  eleman: %d\n", eleman);
    printf("indis: %d\n", indis);
}