#include<stdio.h>

int main()
{

	while(1){
	int satir;
    printf("satir sayisi giriniz:");
    scanf("%d",&satir);
	if(satir%2==0){
		printf("tek sayi giriniz \n");
		}
	else if(satir == -1)
		break;
	else{
	int i,j;
    int kontrol=1;
      for(j=1;j<=satir;j++)
       {
           for(i=1;i<=satir;i++)
           {
               if(i<=kontrol || i>=satir-kontrol+1)
               {
                printf("*");
                 }
               else
               {
                 printf(" ");
               }
             }
           if(j<=satir/2)
        	   kontrol++;
           else
              kontrol--;
            printf("\n");
			}
		}
	}
return 0;
}