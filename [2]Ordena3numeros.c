#include <stdio.h>

int main()
{
    int nota1, nota2, nota3, mayor,medio,menor;
    printf( "Nota Lab1\n");
    scanf("%d",&nota1);
    printf( "Nota Lab2\n");
    scanf("%d",&nota2);
    printf( "Nota Lab3\n");
    scanf("%d",&nota3);
mayor= nota1*((nota1>nota2)&&(nota1>nota3))+nota2*((nota2>nota1)&&(nota2>nota3))+nota3*((nota3>nota1)&&(nota3>nota2));
menor= nota1*((nota1<nota2)&&(nota1<nota3))+nota2*((nota2<nota1)&&(nota2<nota3))+nota3*((nota3<nota1)&&(nota3<nota2));
medio= nota1*((mayor!=nota1)&&(menor!=nota1)) + nota2*((mayor!=nota2)&&(menor!=nota2)) + nota3*((mayor!=nota3)&&(menor!=nota3));  
    
printf("el mayor es %d\n",mayor);
printf("el medio es %d\n",medio);
printf("y el menor es %d\n",menor);
          getch();
}
    
    
    
