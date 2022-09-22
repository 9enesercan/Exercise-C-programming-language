#include <stdio.h>

int main()
{
    int satir,sutun;
    printf("Satir sayisini giriniz:");
    scanf("%d",&satir);
    printf("Sutun sayisini giriniz:");
    scanf("%d",&sutun);

    int dizi[satir][sutun],sayac=1;
    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            int asalmi=1;
            if(sayac==1)
                {
                    asalmi=0; 
                }
            for (int k = 2; k < sayac; k++)
            {
                if(sayac%k==0)
                asalmi=0;
            }
            
            if(asalmi)
            {
                dizi[i][j]=0;
            }
            else
            {
                dizi[i][j]=sayac;
            }
            
            sayac++;
        }
    }


    for (int i = 0; i < satir; i++)
    {
        for (int j = 0; j < sutun; j++)
        {
            printf("%d ",dizi[i][j]);
        }
        printf("\n");
    }
    getch();
}
