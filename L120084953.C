/******************************************************************************
CALIFICADO POR VALENTIN SARMIENTO (sarmiento.vj@pucp.edu.pe)
*******************************************************************************

----------------+
PRUEBA ESCRITA: |
----------------+--------------------------------------------------------------
#NOTA PE                                                  3.5
-------------------------------------------------------------------------------

------------------------+
TRABAJO DE LABORATORIO: |
------------------------+------------------------------------------------------
PROBLEMA 1              |
------------------------+
1. (1.0)Logica de su solucion.                          + 1.0
2. (1.0)Buen uso de las estructuras de control.         + 1.0
3. (3.0)Su programa cumple lo pedido.                   + 3.0
4. (2.0)Comentarios.                                    + 2.0
------------------------+------------------------------------------------------
PROBLEMA 2              |
------------------------+
1. (1.0)Logica de su solucion.                          + 1.0
2. (1.0)Buen uso de las estructuras de control.         + 1.0
3. (3.0)Su programa cumple lo pedido.                   + 3.0
4. (2.0)Comentarios.                                    + 2.0

-------------------------------------------------------------------------------
#NOTA TL                                                 14.0
-------------------------------------------------------------------------------



*******************************************************************************
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()

{
    float x1,x2,y1,y2;                   /* declarar variables....*/
    float distancia;
    int sino;
    
   do
   {
    printf("Ingrese numero 1\n");        /*pedir datos...*/
    scanf("%f",&x1);
    printf("Ingrese numero 2\n");
    scanf("%f",&x2);
    printf("Ingrese numero 3\n");
    scanf("%f",&y1);
    printf("Ingrese numero 4\n");
    scanf("%f",&y2);
    
    
    distancia= sqrt(pow((x1-x2),2)+pow((y1-y2),2));            /*calcular la distancia e imprimirlaa...*/
    printf("la distancia entre (X1,Y1) y (X2,Y2) es %f\n",distancia);
    
    printf("Otra Vez? (escriba 1 si lo desea)\n");           /*preguntaa....*/ 
    scanf("%d",&sino);
    
    }    
    
    while (sino == 1);                    /* repetir siempre que el usuario escriba 1*/
    
   
    return 0;
}    




#include <stdio.h>
#include <math.h>

#define pi 3.14159                  /* constante pi...*/

int main()

{
    float seno;                 
    int ang=0;                    /* declarar...*/
    float rad;
    
    
    do
    {
    rad=pi*ang/180;                            /* transformar angulo a radianes....*/
    seno=sin(rad);                              /* calcular el seno....*/  
    printf("angulo: %d Seno: %f\n",ang,seno);   /* imprimir....*/
    ang +=5;                                   /* aumentar el angulo....*/ 
    }    
    
    while (ang <= 90);                        /* repetir...*/
    
    system("PAUSE");
    
    return 0;
}    
