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

    int carro, dias = 0 ;
    float total , km = 0 ; 
   
    printf("Digite 1 para carro popular ou 2 para carro de luxo: ");
    scanf("%d", &carro);
    while(carro != 1 && carro != 2){
        printf("Digite apenas 1 ou 2!");
        scanf("%d", &carro);
    }
    printf("Digite quantos km's foram percorridos: ");
    scanf("%f", &km);
    printf("Digite quantos dias foram alugados: ");
    scanf("%d", &dias);
 
    switch (carro){
        case 1:
        if (km < 100){
        total = ((km * 0.2) * (dias * 90));    
        }
        else {
        total = ((km * 0.1) * (dias * 90));    
        }
        break;
        
        case 2:
         if (km < 200){
        total = ((km * 0.3) * (dias * 150));    
        }
        else {
        total = ((km * 0.25) * (dias * 90));    
        }
        break;
        
        
        default:
    } 

    printf("Você irá pagar R$: %.2f!", total);
    
    return 0;
}