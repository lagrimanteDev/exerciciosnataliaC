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
#include <ctype.h>


int main()
{
 
    int cont = 0, cont90 = 0, contPesoAltura50 = 0, contPesoAltura100 = 0;
    float  mediaTotal = 0, peso = 0 , altura = 0;
 
    while(cont < 7){
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("\nDigite a sua altura em metros: ");
    scanf("%f", &altura);
    
    if(peso > 90){
    cont90 = cont90 + 1;     
    }
    
    if(peso < 50 && altura > 1.6){
    contPesoAltura50 = contPesoAltura50 + 1;     
    }
        
    if(peso > 100 && altura > 1.9){
    contPesoAltura100 = contPesoAltura100 + 1;     
    }
    
    mediaTotal = mediaTotal + altura;
    
    cont++;    
    
    }
    
    mediaTotal = mediaTotal / 7;
    
    printf("Media das alturas do grupo %.2f \n.", mediaTotal);
    printf("Pessoas com mais de 90kg: %d \n.", cont90);
    printf("Pessoas com menos de 50kg e menos de 1.60 m: %d \n.", contPesoAltura50);
    printf("Pessoas com mais de 100kg e mais de 1.90 m: %d \n.", contPesoAltura100);
    return 0;
}