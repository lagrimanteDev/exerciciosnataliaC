/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float ab , bc , ca = 0 ;
   
   printf("Digite o tamanho do segmento AB: ");
   scanf("%f", &ab);
   printf("Digite o tamanho do segmento BC: ");
   scanf("%f", &bc);
   printf("Digite o tamanho do segmento CA: ");
   scanf("%f", &ca);
    
    
    if(ab > bc + ca){
        printf("\nImpossível formar um triângulo com esses segmentos");
    }
    else if (bc > ab + ca){
        printf("\nImpossível formar um triângulo com esses segmentos");
    }
    else if (ca > ab + bc){
        printf("\nImpossível formar um triângulo com esses segmentos");
    }
    else{
        if(ab == bc && ab == ca){
            printf("\nÉ possível formar um triângulo equilatero");
        }
        else if (ab != bc && ab != ca){
            printf("\nÉ possível formar um triângulo escaleno");
        }
        else{
            printf("\nÉ possível formar um triângulo isoceles");
        }
    }
    
    return 0;
}
    