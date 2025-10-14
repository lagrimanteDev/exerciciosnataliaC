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
    float velocidade = 0;
    
    printf("Digite a sua velocidade media: ");
    scanf("%f", &velocidade);
    if(velocidade > 80){
        printf ("Você foi multado em R$: %.2f ", (velocidade - 80) * 5 );
    }
    else{
        
    }
  
    return 0;
}
