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
    float a = 0;
    
    printf("Digite o valor do salário: ");
    scanf("%f", &a);
    printf("Valor do salário com 15%% de aumento: %.2f" , (a * 1.15) );


    return 0;
}