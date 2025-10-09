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
    float a = 0;
    
    printf("Digite um valor ");
    scanf("%f", &a);
    printf("\n");
    printf("O dobro do valor é: %.2f", a*2);
    printf("\n");
    printf("O triplo do valor é: %.2f", a*3);
    printf("\n");
    printf("O quadrado do valor é: %.2f", pow(a,2));

    return 0;
}
