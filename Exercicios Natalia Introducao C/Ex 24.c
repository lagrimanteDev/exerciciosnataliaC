/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float km = 0;
    
    printf("Digite a quilometragem que você rodou: ");
    scanf("%f", &km);
    
    if( 0 < km && km <= 200 ){
        printf("Você ira pagar R$: %.2f , pela sua viagem!", km * 0.5);    
    }
    else if (km > 200){ 
        printf("Você ira pagar R$: %.2f , pela sua viagem!", km * 0.45);
    }
    else{
        printf("Opção inválida");
    }

    return 0;
}