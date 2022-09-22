#include <stdio.h>

int main()
{
    int cift=1,toplam=0;
    while (cift==1)
    {
        printf("Bir sayi giriniz: ");
        float sayi;
        scanf("%f",&sayi);
        int tam_sayi=sayi;
        
        if(sayi-tam_sayi!=0)
        {
        }
        else if(tam_sayi%2==0)
        {
            toplam+=tam_sayi;     
        }
        else
        {
            cift=0;
        }
        
    }
    printf("%d",toplam);
    getch();
}