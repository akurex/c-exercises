#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int generar()
{
     srand(time(NULL));
     int num,suma=0;
     
     do
     {
         num=rand()%100+1;
         printf("%d\n",num);
         suma+= num;
         }
     while (num%10!=0);
     
     return suma;
     }
     

int main()
{
    int suma,win=0,tie=0,lose=0,veces=0;
    char fin;
    float ganadas,empatadas,perdidas;
    
    do
    {
    
    suma = generar();
    printf("\nLa suma es %d", suma);
    if (suma>=1000) 
    {
    printf("\nGANASTE"); 
    win++;
    }
    else if (suma>=500&&suma<1000)
    {
    printf("\nEMPATE");
    tie++;
    }
    else 
    {
    printf("\nPERDISTE");
    lose++;
    }
    
    veces++;
    
    printf("\nOtra vez? (escriba F para finalizar)");
    scanf(" %c",&fin);
}
   while (fin!='F') ;
   
    ganadas=(float)win/veces*100;
    perdidas=(float)lose/veces*100;
    empatadas=(float)tie/veces*100;
    
    printf("\nPorcentaje ganadas: %.2f",ganadas);
    printf("\nPorcentaje perdidas: %.2f",perdidas);
    printf("\nPorcentaje empatadas: %.2f",empatadas);
    
    getch();
    return 0;
    }
