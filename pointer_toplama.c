#include <stdio.h>

void toplama(int *p_s1,int *p_s2,int *p_toplam)
{
    *p_toplam=*p_s1+*p_s2;
}


int main()
{
    int sayi1,sayi2;
    printf("birinci sayiyi giriniz :");
    scanf("%d",&sayi1);
    printf("ikinci sayiyi giriniz :");
    scanf("%d",&sayi2);

    int toplam;
    toplama(&sayi1,&sayi2,&toplam);
    printf("toplam degeri : %d\n",toplam);

}