#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tesay;
    
    srand(time(NULL)); 
    printf("Terim sayisini giriniz:");
    scanf("%d",&tesay);
    int a[tesay];
    int lamb;

    for (int i = 0; i < tesay; i++)
    {
        
        int b;
        b=rand()%100;
        a[i]=b;      
    }
    for(int o=0; o<tesay;o++)
        {
            printf("%d ",a[o]);
        }
    
    printf("\nsiralanmis hali\n");
    
    for (int i = 0; i < tesay ; i++)
    {
        lamb=0;
        for (int k = 0; k < tesay; k++)
        {
            if (a[k]>a[k+1])
            { 
                lamb=1;
                int tmp=a[k];
                a[k]=a[k+1];
                a[k+1]=tmp;
            }
            
        }
        if (lamb==0)
        {
            break;
        }
        for(int k=0; k<tesay;k++)
        {
            printf("%d ",a[k]);
        }
        printf("\n");
        
    }
    
    
    printf("\nsiralanmis son hali:\n");
    for(int o=0; o<tesay;o++)
        {
            printf("%d ",a[o]);
        }
    
    
}