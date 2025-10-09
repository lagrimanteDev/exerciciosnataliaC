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
    float a , b , c , menor = 0;
    
    printf("Digite o primeiro número:");
    scanf("%f", &a);
    printf("Digite o segundo número:");
    scanf("%f", &b);
    printf("Digite o terceiro número:");
    scanf("%f", &c);

    if (a == b || a == c || b == c ){
        printf("Digite valores diferentes\n");
        return 0;
        
    }
    
    
    else if (a < b && a < c){
        menor = a;
    }
    else if(b < a && b < c){
        menor = b;
    } 
    else {
        menor = c;
            }
            
    
    
    printf("O menor número é: %.2f" ,  menor);
    return 0;
}
