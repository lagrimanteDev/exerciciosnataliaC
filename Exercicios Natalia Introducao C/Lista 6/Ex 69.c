/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{   
    

    float primeiro = 0 , razao = 0 , soma = 0 , contador = 0 ;
    
    
    printf("Digite o primeiro termo da PA: ");
    scanf("%f", &primeiro);
    printf("Digite a razao da PA: ");
    scanf("%f", &razao);
    soma = primeiro;
    
   for (int i = 0 ; i < 10  ; i++){
       printf("\nPA : %.2f" , primeiro);
       primeiro = primeiro + razao;
       soma = soma + primeiro;
   }
   
   printf("\nO valor da soma é: %.2f", soma);
   
}