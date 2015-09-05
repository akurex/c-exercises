/******************************************************************************
CALIFICADO POR VALENTIN SARMIENTO (sarmiento.vj@pucp.edu.pe)
*******************************************************************************

----------------+
PRUEBA ESCRITA: |
----------------+--------------------------------------------------------------
#NOTA PE                                                  4.2
-------------------------------------------------------------------------------

------------------------+
TRABAJO DE LABORATORIO: |
------------------------+------------------------------------------------------
PROBLEMA 1              |
------------------------+
1. (1.0)Logica de su solucion.                          + 1.0
2. (1.0)Buena definicion de sus funciones.              + 1.0
3. (3.0)Su programa cumple lo pedido.                   + 3.0
4. (2.0)Comentarios.                                    + 2.0
------------------------+------------------------------------------------------
PROBLEMA 2              |
------------------------+
1. (1.0)Logica de su solucion.                          + 1.0
2. (1.0)Buena definicion de sus funciones.              + 1.0
3. (3.0)Su programa cumple lo pedido.                   + 2.0
4. (2.0)Comentarios.                                    + 1.5

-------------------------------------------------------------------------------
#NOTA TL                                                 12.5
-------------------------------------------------------------------------------



*******************************************************************************
*******************************************************************************/


#include <stdio.h>
#include <math.h>

#define pi 3.14159

float seno(float,int);



void main()
{
    int k;                                      /* variables........ */
    float rad;
    float elseno=0;
    int limite=10;
            
     for (k=0;k<=360;k+=5)                            /* imprimir los valores hasta el 360...... */
     {
        rad=k*pi/180;
        elseno = seno(rad,limite);
        printf("el seno de %d es  %f\n",k,elseno);
     }         
     
 getch();    
}

float seno(float x, int n)
{
    float sen;
    int i,j=1,w,y,z;
    int factorial=1,divisor=0;                   /* variables........ */
    
    for (i=0;i<=n;i++)                           /* realiza la sumatoria... */
    {
        divisor=2*i+1;
    
         while (j!=divisor)
    {
         factorial= factorial*j;
         j++;
    }   
    w=pow((-1),i);
    y=pow(x,divisor);
    z=factorial;
        sen+= w*y/z;   /* formula...... */
    }
    
        return sen;
}







#include <stdio.h>

int primo(int num)                              /* funcion determinar primo..........*/
{
    int i=2,divi=0;
    
    do
    {
    if (num%i==0) divi++;
    i++;
    }
    while (i!=num);
    
    if (divi>0) return(0);
    else return (1);
}

int capicua(int num)                           /* funcion determinar capicua........*/
{
    int inv=0,original;
    
    original= num;
    
    if (num==0) return(1);
    else
    {
        while (num>0)
        {inv=inv*10+num%10;                   /* invierte el numero......... */
        num/=10;
        }    
    }
    
    if (original==inv) return(1);               /* compara con el original........ */
    else return(0);
} 


int serie(int num)
{
    int n1,n2;
   
   
    ///NADA
    
    
}    
    
    

void main()
{
  int num,i=0;
  
  do                                            /* pide numeros y dice si cumplen hasta que la suma sea >1000 */
 { printf("Ingrese el numero\n");
  scanf("%d",&num);
  
  if (primo(num)==1) printf("%d es primo\n",num);
  if (capicua(num)==1) printf("%d es capicua\n",num);
  i+=num;
 }
 while(i<=1000);  
 
 getch();
}
  
    
          
