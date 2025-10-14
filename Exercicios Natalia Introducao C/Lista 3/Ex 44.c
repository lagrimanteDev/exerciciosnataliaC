/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int inicial , final , incremento , a = 0 ;

    printf("Digite o valor inicial: ");
    scanf("%d", &inicial);
    printf("\nDigite o valor final: ");
    scanf("%d", &final);
    printf("\nDigite o incremento: ");
    scanf("%d", &incremento);

    
    printf("\n Contagem: ");
     a = inicial;   
    while (a < final){
       printf("%d ", a);
       a += incremento;
        }
        
    printf("Acabou!");

    return 0;
}