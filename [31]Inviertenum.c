#include <stdio.h>


int invierte(int num)
{
int inv=0;

if (num==0)
   return(0);
else
{
    while(num>0)
    {
    inv=(inv*10) + (num%10);
    num/=10;
    }
return(inv);
}
}

void main()
{
int n;

printf("Introduzca un numero:\n");
scanf("%d",&n);

if(n<0)
printf("Error: numero negativo\n");
else
printf("\nNumero invertido: %d\n",invierte(n));
getch();
}
