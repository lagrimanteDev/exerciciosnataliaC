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
    float real = 0, dol = 0 ;
    printf("Digite o valor da sua carteira em R$: ");
    scanf("%f", &real);
    dol = (real/3.45);
    printf("Você pode comprar %.2f ", dol);  
    printf("dolares");

    return 0;
}