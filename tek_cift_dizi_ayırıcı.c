#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a=0,dizi[10];
    while (a<10)
    {
        dizi[a]=rand()%101;
        a++;
    }
    
    printf("Rastgele sayilar:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",dizi[i]);
    }

    
    for (int i = 0; i < 9; i++)
    {   
        int lamp=0;
        for (int j = 0; j < 8; j++)
        {
            if (dizi[j]>dizi[j+1])
            {
                int tmp=dizi[j];
                dizi[j]=dizi[j+1];
                dizi[j+1]=tmp;
                lamp=1;
            }
            
        }
        if (lamp==0) 
        {
            break;
        }
    }

    printf("\nSirali dizi:\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d ",dizi[i]);
    }

    printf("\nOnce tek sayilar, sonra cift sayilar sirali dizi:\n");
    for (int i = 0; i < 9; i++)
    {
        if (dizi[i]%2!=0)
        {
            printf("%d ",dizi[i]);
        }
        
    }

    for (int i = 0; i < 9; i++)
    {
        if (dizi[i]%2==0)
        {
            printf("%d ",dizi[i]);
        }
        
    }
    getch();

    
}