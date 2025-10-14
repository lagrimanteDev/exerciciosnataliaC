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
    int n1 = 0 ;
    printf("Digite número: ");
    scanf("%d", &n1);
    
    
    if ( n1 % 2 == 0) {
        printf("Número par");
    }
    else{
        printf("Número ímpar");
    }

    return 0;
}
