#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanzar()
{
    int cara;
    srand((unsigned)time(NULL));
    cara = (6*rand()/(RAND_MAX+1));
    cara = (6*rand()/(RAND_MAX+1)+1);
    return cara;
}

void repetir()
{
     int sumaB=0,sumaN=0;
     int lanzaB,lanzaN;
     
     do {
         turnoB:
     lanzaB=lanzar();
     sumaB+=lanzaB;
     printf("El blanco obtuvo: %d\nSuma blanco: %d\n",lanzaB,sumaB);
     getch();
     if (lanzaB==6) goto turnoB;
     if (sumaB>=100) goto final;
     printf("\nCAMBIO DE JUGADOR\n");
     
         turnoN:
     lanzaN=lanzar();
     sumaN+=lanzaN;
     printf("El negro obtuvo: %d\nSuma negro: %d\n",lanzaN,sumaN);
     getch();
     if (lanzaN==6) goto turnoN; 
     if (sumaN>=100) goto final;
     printf("\nCAMBIO DE JUGADOR\n");
     
     }
     while (sumaB<100||sumaN<100);
     final:
     if (sumaB>sumaN) printf("\nGana el blanco con %d puntos",sumaB);
     else printf("\nGana el negro con %d puntos",sumaN);
     }    


void main(void)
{
     printf("+-----------Juego de Lanzar Dados------------+\n");
     getch();
     repetir();
     
     getch();
     }
