/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{

    float casa , sal, tempoPrestacao = 0 ;
    int anos = 0 ;
   
    printf("Digite o valor da casa em R$: ");
    scanf("%f", &casa);
    printf("Digite o valor do salário em R$: ");
    scanf("%f", &sal);
    printf("Digite em quantos anos você irá pagar: ");
    scanf("%d", &anos);

    
    
    if (((sal * 0.3) * (12 * anos)) < casa){
        printf("Empréstimo negado!");
    }
    else {
        printf("Empréstimo aceito!");
    }

    return 0;
}