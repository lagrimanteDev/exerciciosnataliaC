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
    float nascimento = 0 ;
    printf("Digite o ano do seu nascimento no formato YYYY: ");
    scanf("%f", &nascimento);
    
    if (2025 - nascimento >=16){
        printf("Você pode votar!");
    }
    else{
        printf("Você não pode votar!");
    }

    return 0;
}
