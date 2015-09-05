#include <stdio.h>




void imprime(a,b,c,d)
{  
     int i=0;
     if (b>c&&a<d)
     {  for(i=c;i>b;i++) printf("\n%d",i); }
     else if (a<d&&c<b)
     {  for(i=a;i>d;i++) printf("\n%d",i); }
}


void main(void)
{
     int a,b,c,d;
     printf("Ingrese los intervalos: a,b y c,d\n");
     scanf("%d %d %d %d",&a,&b,&c,&d);
     
     imprime(a,b,c,d);
     if (b<a||d<=c) printf("\nvalores incorrectos (a<b y c<d)");
     else if (b==a||c==d||b<c||d<a) printf("\nla interseccion es del vacio");
     else if (a==d) printf("\n%d",a);
     else if (b==c) printf("\n%d",b);
     else imprime(a,b,c,d);
     
     getch();
     }


