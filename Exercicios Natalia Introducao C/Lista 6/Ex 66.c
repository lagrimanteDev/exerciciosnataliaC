/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{   
    
    float valor = 0 ;
    printf("Digite o valor para ser calculado: ");
    scanf("%f", &valor);
    
   for (int i = 0 ; i < valor ; i++){
       printf("\n%.f  x %d  = %.f", valor, i , valor * i);
   };
}