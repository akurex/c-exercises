#include <stdio.h>
#include <math.h>


int digitos(num)
{
    int digi;
    do 
    {
        num/=16;
        digi++;
    }    
    while (num>=16);
    
    return digi;
}

int conversor(hexa[digi],num,digi)
{
    int num,i,digi,temp;
    
    
    for (i=digi;i>=0;i--)
    {
    temp = num%16;
      if (temp<=9) hexa[i-1]=i+48;
      else if (hexa[i-1]==10) hexa[i-1]='A';
      else if (temp==10) hexa[i-1]='A';
      else if (temp==11) hexa[i-1]='B';
      else if (temp==12) hexa[i-1]='C';
      else if (temp==13) hexa[i-1]='D';
      else if (temp==14) hexa[i-1]='E';
      else if (temp==15) hexa[i-1]='F';
      else if (temp==16) hexa[i-1]='G';
    }    
    
    }
      

int main(void)
{
    long numero;
    int digi,i,lives,acerto=0;
    char hexa[digi];
    char mostrar[digi];
    char ch;
    
    ingreso:
    printf("Jugador 1: ingrese el numero (7 digitos maximo)")
    scanf("%d",&numero);
    if (numero>=pow(10,8)) goto ingreso;                            /* ingresa el numero */
    
    digi=digitos(num);                                               /* calcula sus digitos hexa */
    conversor(hexa);                                               /* convierte a hexa */
    
    for (i=0;i<=digi-1;i++) mostrar[i]='_';              /* inicializa la variable mostrar ,la cual se imprime en cada intento */
        
    Inicio:
    printf("Numero en Hexadecimal: ")
    for (i=0;i<=digi-1;i++) printf("%c ");                                         /* imprime el numero y sus espacios */
    printf ("\nJugador 2: Tiene %d vidas. Elija un numero hexadecimal: ",lives);
    scanf("%c",&ch);                                            /* el intento del jugador 2 */
    
    for (i=0;i<=digi-1;i++) 
    { if (hexa[i]==ch) mostrar[i]=ch; acerto =1;                /* verifica si acierta o no */
    }
    
    if (acerto == 0) lives--;                                  /* si no acierta, pierde vida */
    if (lives == 0) goto Final;                                /* si se queda sin vidas, pierde */
    if (hexa[]==mostrar[]) goto Final;                         /* si logra adivinar, gana */
    goto Inicio;                                          /* repite */
    
    Final:
          if (lives == 0) printf("Gana jugador 1: el numero era "); 
          else if (hexa[]==mostrar[]) printf("Gana jugador 2: el numero era ");    /* resultados */
    for (i=0;i<=digi-1;i++) printf("%c",hexa[i]); 
    
    getch();
    return 0;
        
        
    
    
     
}  


/*Puntaje total: 4 ptos*/  
