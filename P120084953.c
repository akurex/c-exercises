#include <stdio.h>


int calcula(dim)
{
    int v1[dim],v2[dim];                                 /*   se declaran los vectores  */
    int suma[dim],resta[dim];
    int punto=0,i,temp=0;
    
    printf("Ingrese los valores del vector 1\n");         /* se piden las componentes de ambos vectores */
    for (i=0;i<=dim-1;i++)
    {
        scanf("%d",&temp);
        v1[i]=temp;
    }    
    
    printf("Ingrese los valores del vector 2\n");
    for (i=0;i<=dim-1;i++)
    {
        scanf("%d",&temp);
        v2[i]=temp;
    }
        
    for (i=0;i<=dim-1;i++)                           /* se calcula la suma vectorial, la resta y el producto punto */
    {
        suma[i]=v1[i]+v2[i];
        resta[i]=v1[i]-v2[i];
        punto+=v1[i]*v2[i];
    }
    
    printf("La suma es\n");                          /* se imprimen los resultados */
        for (i=0;i<=dim-1;i++)
    {   printf("%d ",suma[i]);}
    printf("\nLa resta es\n");
         for (i=0;i<=dim-1;i++)
    {   printf("%d ",resta[i]);}
    printf("\nEl producto punto es\n");
         
      printf("%d ",punto);
}


int main(void)
{
    int dim;                                                /* ingresa la dimension */
    printf("Ingrese la dimension de los vectores\n");
    scanf("%d",&dim);
    
    calcula(dim);                                          /* llama la funcion que esta arriba ^  */
    
    getch();
    return 0;
}

/*Puntaje total: 7 ptos*/    
