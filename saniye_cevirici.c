#include <stdio.h>
#include <stdlib.h>

void xParseSeconds(int seconds)
{
    int saniye=seconds%60;
    int dakika=(seconds/60)%60;
    int saat=seconds/3600;

    printf("%d saat %d dakika %d saniye",saat,dakika,saniye);
}

int main()
{
    printf("Saniye bilgisi giriniz: "); int saniye; scanf("%d",&saniye);
    xParseSeconds(saniye);
}

