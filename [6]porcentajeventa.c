#include <stdio.h>

int main()
{
     int num;
     
     scanf("%d",&num);
     if ((num>0)&&(num<=100)) 
     {
          printf("descuento de 2%%");
          }
     else if (num>100&&num<=500) 
     {
          printf("descuento de 4%%");
          }
     else if (num>500)
     {
           printf("descuento de 6%%");
          }
     
     getch();
     return 0;
     }
