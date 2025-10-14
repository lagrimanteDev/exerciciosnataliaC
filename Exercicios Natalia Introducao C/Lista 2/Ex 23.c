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
    char nome, sexo ;
    float valor , valorFinal = 0 ;
    
    
    printf("Digite o seu nome: ");
    scanf("%s", &nome);
    printf("\nDigite o seu sexo [M/F]: ");
    scanf("%s", &sexo);
    printf("Digite o valor das suas compras ");
    scanf("%f", &valor);
    
    if( sexo == 'm'){
        printf("O valor final é de %.2f ", valor * 0.95);
    }
    else{
        printf("O valor final é de %.2f ", valor * 0.87);
    }
    
    
 
    
    

    return 0;
}
