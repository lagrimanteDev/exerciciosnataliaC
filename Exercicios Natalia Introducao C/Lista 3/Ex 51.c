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
   float maior , menor, preco, cont = 0;
   
   while (cont < 8){
    printf("Digite o valor do produto: " );
    scanf("%f",&preco);
    if (cont == 0 ){
        maior = preco;
        menor = preco;
    }
    else {
        if(preco > maior){
            maior = preco;
        }
        else if(preco < menor){
            menor = preco;
        }
    }
      cont++;
   }
   
   
    printf("\nValor do maior produto é: %.2f .Valor do menor produto é: %.2f. ", maior , menor);
    return 0;
}