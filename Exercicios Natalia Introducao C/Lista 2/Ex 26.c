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
   float a , b = 0 ;
   
   printf("Digite o número A: ");
   scanf("%f", &a);
   printf("Digite o número B: ");
   scanf("%f", &b);

    
    
    if(a > b ){
        printf("\nO primeiro é maior");
    }
    else if (b > a){
        printf("\n O segundo é maior");
    }
    else{
        printf("\nNão existe valor maior, os dois são iguais");
    }
    
    return 0;
}