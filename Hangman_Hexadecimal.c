#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int digitos(int num)
{
    int digi=0;
    
    do 
    {
        num/=16;
        digi++;
    }    
    while (num!=0);
    
    return digi;
}

int conversor(long hexa[], long num,int digi)
{
    int i,temp;

    for (i=digi-1;i>=0;i--)
    {
    temp = num%16;
      if (temp<=0&&num<=16) 
         { hexa[0]=num;
           temp=num; 
            }
      
      if (temp<=9) hexa[i]=temp+48;
      else if (temp==10) hexa[i]='A';
      else if (temp==11) hexa[i]='B';
      else if (temp==12) hexa[i]='C';
      else if (temp==13) hexa[i]='D';
      else if (temp==14) hexa[i]='E';
      else if (temp==15) hexa[i]='F';
      else if (temp==16) hexa[i]='G';
      
      num/=16;
    }    
     
    }
      

int main(void)
{
    long numero;
    int digi,i,lives=2,acerto=0,suma=0;
    long hexa[10];
    long mostrar[10];
    char ch;
    
    ingreso:
    printf("Jugador 1: ingrese el numero (7 digitos maximo)\n");
    scanf(" %d",&numero);
    if (numero>=pow(10,8)) goto ingreso;                            /* ingresa el numero */
    
    digi = digitos(numero);                                               /* calcula sus digitos hexa */
    conversor(hexa,numero,digi);                                               /* convierte a hexa */
    for (i=0;i<=digi-1;i++) printf("%c", hexa[i]);
    for (i=0;i<=digi-1;i++) mostrar[i]='_';              /* inicializa la variable mostrar ,la cual se imprime en cada intento */
    printf("\nDigitos: %d",digi);    
    
    Inicio:
    acerto =0;
    printf("\nNumero en Hexadecimal: ");
    for (i=0;i<=digi-1;i++) printf("%c ", mostrar[i]);                                         /* imprime el numero y sus espacios */
    printf ("\nJugador 2: Tiene %d vidas. Elija un numero hexadecimal: ",lives);
    scanf(" %c",&ch);                                            /* el intento del jugador 2 */
    
    
    for (i=0;i<=digi-1;i++) 
    { if (hexa[i]==ch) 
         { mostrar[i]=ch; 
           acerto =1; 
           suma++; }            /* verifica si acierta o no */
    }
    if (suma==digi) goto Final;
    
    if (acerto == 0) lives--;                                  /* si no acierta, pierde vida */
    if (lives == 0) goto Final;                                /* si se queda sin vidas, pierde */
    goto Inicio;                                          /* repite */
    
    Final:
          if (lives == 0) printf("\nGana jugador 1: el numero era "); 
          else  printf("\nGana jugador 2: el numero era ");    /* resultados */
    for (i=0;i<=digi-1;i++) printf("%c",hexa[i]); 
    
 getch();
 return 0;
}
