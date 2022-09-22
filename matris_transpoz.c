#include <stdio.h>

int main()
{

    printf("boyut giriniz: ");
    int boyut;
    scanf("%d",&boyut);
    int dizi[boyut][boyut];
    
    for (int i = 0; i < boyut; i++)
    {
        int sayi=1,sayac=i+1;
        for (int j = 0; j < boyut; j++)
        {
            if (sayac>0)
            {
                dizi[i][j]=sayi;
                sayi++;
                sayac--;
            }
            else
            {
                dizi[i][j]=0;
            }
            
        }
        
    }

    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            printf("%d ",dizi[i][j]);
        }
        printf("\n");    
    }

    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            if (i<j)
            {
                int tmp=dizi[i][j];
                dizi[i][j]=dizi[j][i];
                dizi[j][i]=tmp;
            }
            
        }
          
    }
    printf("\n\n"); 
    for (int i = 0; i < boyut; i++)
    {
        for (int j = 0; j < boyut; j++)
        {
            printf("%d ",dizi[i][j]);
        }
        printf("\n");    
    }
    
}