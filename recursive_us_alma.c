#include <stdio.h>

int us_al(int sayi,int us)
{
    if (us==1)
    {
        return sayi;
    }
    return sayi*us_al(sayi,us-1);
}


int main()
{
    printf("Us alinacak sayiyi giriniz: ");
    int sayi;
    scanf("%d",&sayi);

    printf("Us degerini giriniz: ");
    int us;
    scanf("%d",&us);

    printf("Sonuc :%d",us_al(sayi,us));
    getch();

}