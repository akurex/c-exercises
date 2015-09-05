#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include <conio.h>



int main()
{
    char *A, *B, *C, *D, *E;
    int Aav,Bav,Cav,Dav,Eav,sumaA=0,sumaB=0,sumaC=0,sumaD=0,sumaE=0,i;
    
    srand(time (NULL));
    
    A=(char *)malloc(50*sizeof(char));
    B=(char *)malloc(50*sizeof(char));
    C=(char *)malloc(50*sizeof(char));
    D=(char *)malloc(50*sizeof(char));
    E=(char *)malloc(50*sizeof(char));
    
    *A='A';
    *B='B';
    *C='C';
    *D='D';
    *E='E';
    
    printf("En sus marcas.. listos.. GO!\n");
    
   
    printf("A\n");
    printf("B\n");
    printf("C\n");
    printf("D\n");
    printf("E\n\n");
    
    Inicio:
    Aav = rand()%10+1;
    Bav = rand()%10+1;
    Cav = rand()%10+1;
    Dav = rand()%10+1;
    Eav = rand()%10+1;     
    
    printf("A Avanzo: %d\n",Aav);
    printf("B Avanzo: %d\n",Bav);
    printf("C Avanzo: %d\n",Cav);
    printf("D Avanzo: %d\n",Dav);
    printf("E Avanzo: %d\n",Eav);
    
    sumaA = sumaA+Aav;
    sumaB = sumaB+Bav;
    sumaC = sumaC+Cav;
    sumaD = sumaD+Dav;
    sumaE = sumaE+Eav;
    
    printf("A Suma: %d\n",sumaA);
    printf("B Suma: %d\n",sumaB);
    printf("C Suma: %d\n",sumaC);
    printf("D Suma: %d\n",sumaD);
    printf("E Suma: %d\n",sumaE);
    
    *(A+sumaA)='A';
    *(B+sumaB)='B';
    *(C+sumaC)='C';
    *(D+sumaD)='D';
    *(E+sumaE)='E';
    
    for(i=0;i<sumaA;i++) *(A+i)=' ';
    for(i=0;i<sumaB;i++) *(B+i)=' ';
    for(i=0;i<sumaC;i++) *(C+i)=' ';
    for(i=0;i<sumaD;i++) *(D+i)=' ';
    for(i=0;i<sumaE;i++) *(E+i)=' ';
    
    for(i=0;i<=50;i++) printf("%c",*(A+i));
       printf("\n");
    for(i=0;i<=50;i++) printf("%c",*(B+i));
       printf("\n");
    for(i=0;i<=50;i++) printf("%c",*(C+i));
       printf("\n");
    for(i=0;i<=50;i++) printf("%c",*(D+i));
       printf("\n");
    for(i=0;i<=50;i++) printf("%c",*(E+i));
       printf("\n");
    
    
    
    getch();
    if(sumaA<50&&sumaB<50&&sumaC<50&&sumaD<50&&sumaE<50)
    {goto Inicio;}
    
    
    
system("pause");
return 0;  
    
}
