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
    float salMin, salFuncionario = 0;

    printf("Digite o valor do salário minímo ");
    scanf("%f", &salMin);
    printf("\n");
    printf("Digite o valor do salário do funcionário ");
    scanf("%f", &salFuncionario);
    printf("\n");
    printf("Ele recebe : %.2f salários", salFuncionario/salMin);

    return 0;
}
