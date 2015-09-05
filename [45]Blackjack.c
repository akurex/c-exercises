#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*------------------BlackJack sin Az: 1 o 11; sin J,Q,K-------------------*/

int draw()
{
    srand(time(NULL));
    int carta;
    carta = 13 * rand() / (RAND_MAX + 1);
    carta = (13 * rand() / (RAND_MAX + 1))+1;


    return carta;
}

int sumar(valor)
{   
    valor += draw();
    return valor;
}

void compara(mio,cpu)
{if (mio>21||cpu>21)
     {if (mio>21) printf("PERDISTE (por desborde)");
     else printf("GANASTE (por desborde)");}
 else if (mio>cpu) printf("GANASTE");
 else if (mio<cpu) printf("PERDISTE");
 else if (mio==cpu) printf("EMPATE");
 }

int main()
{
    int misuma,pcsuma=0,cpu;
    char otra='S';
    
    misuma=draw();
    getch();
    pcsuma=draw();
    printf("Jugador  CPU");
    printf("\n  %d       X\n",misuma,pcsuma);
    
    system("PAUSE");
    
while (pcsuma<=17||(otra=='S'))
{    
     if (otra!='S') goto salto1;
     misuma=sumar(misuma);
     if (misuma>21)
     { printf("%d DESBORDE X_X",misuma);
       goto salto2; }
     else if (misuma==21)
     { printf("%d BLACKJACK!",misuma);
       goto salto2; }
     else printf("Hasta ahora vas %d",misuma);
     
     salto1:
     if (pcsuma>17&&pcsuma<=21) goto salto3;
     cpu=draw();
     pcsuma+=cpu;
     printf("\nCPU: %d", cpu);
     getch();
     
     if (pcsuma>17&&pcsuma<=21) printf("\nCPU: READY");
     else if (pcsuma>21) {printf("\nCPU: DESBORDE"); goto salto2;}
     
     salto3:
     if (otra=='S') 
     {printf("\nDesea otra carta? (escriba S para darle otra) ");
     scanf(" %c",&otra); }
     
}          
     salto2:  
     
      

    
    printf("\nTu suma %d",misuma);
    printf("\nCPU suma %d\n",pcsuma);
    compara(misuma,pcsuma);
    getch();
}
    
