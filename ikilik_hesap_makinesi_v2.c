#include <stdio.h>

int main()
{
    int islem;
    do
    {
        printf("\n*****ikilik hesap makinasi*****\n*********islem seciniz********* \n[1]ikilik tabandan onluk tabana\n[2]onluk tabandan ikilik tabana \n[3]cikis yap\nher islemde geri donmek icin -2 cikis icin -1 yazabilirsiniz\n");
        scanf("%d", &islem);
        switch (islem)
        {
        case 1:
            system("CLS");
            int sayi;
            printf("\niklik tabandaki sayiyi giriniz : ");
            scanf("%d", &sayi);

            if (sayi>0)
            {
                
            }
            else if(sayi==-2)
            {
                system("CLS");
                printf("\ngeri donuldu\n");
                break;
            }
            else
            {
                printf("\nyanlis deger girildi");
            }
            
            
            

            break;
        
        default:
            break;
        }
    } while ();
}