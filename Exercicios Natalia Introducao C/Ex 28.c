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
   float a , b , area = 0 ;
   
   printf("Digite a largura em metros: ");
   scanf("%f", &a);
   printf("Digite ao comprimento em metros: ");
   scanf("%f", &b);

    area  = a * b ; 
    
    if(area < 100 ){
        printf("\nTERRENO POPULAR");
    }
    else if (area >=100 && area <= 500 ){
        printf("\n TERRENO MASTER");
    }
    else{
        printf("\nTERRENO VIP");
    }
    
    return 0;
}