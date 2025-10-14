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
   float a , b , media = 0 ;
   
   printf("Digite a pirmeira nota: ");
   scanf("%f", &a);
   printf("Digite a segunda nota: ");
   scanf("%f", &b);

    media  = (a + b) /2;
    
    if(media >= 5  && media < 7 ){
        printf("\nRECUPERAÇÃO");
    }
    else if (media >= 7 ){
        printf("\n APROVADO");
    }
    else{
        printf("\nREPROVADO");
    }
    
    return 0;
}