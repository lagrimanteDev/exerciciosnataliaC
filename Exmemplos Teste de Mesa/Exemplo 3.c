/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valorProduto = 0;

    
    printf("Digite o valor do produto ");
    scanf("%f", &valorProduto);
    printf("\n");
    printf("O valor com desconto é de: %.2f", valorProduto * 0.75);

    return 0;
}
