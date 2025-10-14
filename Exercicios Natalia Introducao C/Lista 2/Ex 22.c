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
    int ano, idade = 0 ;
    
    printf("Digite o ano do seu nascimento no formato YYYY: ");
    scanf("%d", &ano);
    
    idade = 2025 - ano;
    if (idade > 18){
            printf("Já se passaram %d anos do alistamento" , idade - 18);
        }
    else if(idade < 18){
        printf("Faltam %d anos do alistamento" , 18 - idade);
    }
    else {
        printf("Você tem 18 anos , a professora não falou sobre esse tratamento de dados");
    }
    
    

    return 0;
}
