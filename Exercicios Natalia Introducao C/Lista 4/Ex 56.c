/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int numero = 0, soma = 0  ;
   
   
    printf("Digite o numero a ser somado: ");
    scanf("%d", &numero);

   while (numero != 1111){
        printf("Digite o numero a ser somado: ");
        scanf("%d", &numero);
        soma = soma + numero;
   }

    printf("O valor somado é: %d", soma);
    return 0;
}
