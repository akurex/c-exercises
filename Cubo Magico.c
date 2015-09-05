#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

f_magico(int m)
{
        int y,z,limite,suma,i,k,num[20][20];     
   srand(time(NULL));
   limite=pow(m,2);
 
 for (k=0;k<m-1;k++)
  {
    for (i=0;i<m;i++)
      { salto:
           num[k][i]= rand()%limite+1;
           //getch();
           if (k!=0&&y!=0) {
   for (z=0;z<k;z++)
   {
       for (y=0;y<i;y++)
           if  (num[k][i]==num[z][y]) goto salto;
           }   
   }    
}
}
               
    
   for (k=0;k<m-1;k++)
   {
    for (i=0;i<m;i++)
    { 
      
      
      printf(" %d |",num[k][i]);
      getch();
      }
      
    
    printf("\n");
    
    for (i=0;i<m;i++)  
      { printf("---+"); }
    
      
    printf("\n");  
      }
      
     for (i=0;i<m;i++)
    {
      num[k+1][i+1]=rand()%limite+1;   
      printf(" %d |",num[k+1][i+1]);
      getch();
      }
                 
}

int main()
{
     int m;
     printf("Ingrese m: \n");
     scanf("%d",&m);
     
     f_magico(m);
     
     getch();
     
     return 0;
     }
