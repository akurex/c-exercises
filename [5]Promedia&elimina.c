#include <stdio.h>

int main()
{
     int no1,no2,no3,no4,menor,promedio;
     
     
     scanf("%d %d %d %d",&no1 ,&no2 ,&no3 ,&no4);
     menor=no1*(no1<no2&&no1<no3&&no1<no4)+no2*(no2<no1&&no2<no3&&no2<no4)+no3*(no3<no1&&no3<no2&&no3<no4)+no4*(no4<no1&&no4<no3&&no4<no2);
     printf("se elimina el %d\n", menor);
     promedio=(no1+no2+no3+no4-menor)/3;
     printf("El promedio es %d",promedio);
     getch();
     return 0;
}
