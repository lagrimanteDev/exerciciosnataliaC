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
    float intervalo = 0;

    
    printf("Digite o intervalo de tempo em segundos.\n");
    scanf("%f", &intervalo);
    printf("\n");
    printf("O intervalo em horas é: %.2f horas. O intervalo em minutos é: %2f minutos. O intervalo em segundos é: %.2f segundos", intervalo/3600, intervalo/60 , intervalo );

    return 0;
}
