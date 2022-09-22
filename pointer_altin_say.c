#include <stdio.h>

void ziynetSayisiniBul(float tpara,float ziynet,int *p_tam,int *p_yarim,int *p_ceyrek,float *p_kpara)
{
    int sayac=0;
    
    while (tpara-ziynet*sayac>=0)
    {
        sayac++;
    }
    *p_tam=sayac-1;
    tpara-=(*p_tam)*ziynet;
    
    
    sayac=0;
    while (tpara-(ziynet/2)*sayac>=0)
    {
        sayac++;
    }
    *p_yarim=sayac-1;
    tpara-=(*p_yarim)*(ziynet/2);


    sayac=0;
    while (tpara-(ziynet/4)*sayac>=0)
    {
        sayac++;
    }
    *p_ceyrek=sayac-1;
    tpara-=(*p_ceyrek)*(ziynet/4);
    
    *p_kpara=tpara;
}

int main() 
{
    printf("Para miktarini giriniz (TL) : ");
    float miktar;
    scanf("%f",&miktar);
    printf("\nTam ziynet altini satis degerini giriniz :  ");
    float ziynet;
    scanf("%f",&ziynet);
    printf("\n-------------------------");
    int tam,yarim,ceyrek;
    float kpara;
    ziynetSayisiniBul(miktar,ziynet,&tam,&yarim,&ceyrek,&kpara);
    printf("\n%d adet tam, %d adet yarim ve %d adet de ceyrek altin alabilirsiniz.\nKalan paraniz : %.2f TL",tam,yarim,ceyrek,kpara);
}