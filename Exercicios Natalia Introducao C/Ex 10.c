/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    float l , h , litros = 0;
    
    printf("Digite o valor da largura: ");
    scanf("%f", &l);
    printf("Digite o valor da altura: ");
    scanf("%f", &h);
    litros = (l * h)/2;
    printf("Área a ser pintada: %.2f\n" ,l*h);
    printf("Quantidade de litros: %.2f", litros);


    return 0;
}