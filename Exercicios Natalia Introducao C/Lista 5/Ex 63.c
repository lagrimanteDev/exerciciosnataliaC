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
    
    float continuar, menorValor ,soma = 0, valor = 0, contador = 0 , contadorPar = 0, media = 0;
    int conversao;
    
    do {
    printf("Digite um número: ");
    scanf("%f", &valor);
    if(contador == 0 ){
        menorValor = valor;
    }
    contador = contador + 1 ;
    media = media + valor;
    soma = soma + valor;
    
    
    if(menorValor > valor){
        menorValor = valor;
    }
    conversao = (int)valor;
    if(conversao % 2 == 0 ){
        contadorPar = contadorPar + 1;
    }
    
    printf("Digite 1 para continuar ou 0 para parar: ");
    scanf("%f", &continuar);
    while(continuar != 1 && continuar != 0 ){
        printf("Digite apenas 1 ou 0! ");
        scanf("%f", &continuar);
    }
    } while (continuar != 0);
    media = media / contador;
    printf("\nSomatorio dos valores %.2f.", soma);
    printf("\nMenor valor digitado %.2f.", menorValor);
    printf("\nA média dos valores é de %.2f.", media);
    printf("\nForam digitado(s) %.2f valore(s) par.",contadorPar);
    return 0;
}