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
    
    int continuar, idade = 0, contadorIdade = 0 , contador21 = 0;
    float media = 0;
 
    
    do {
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    contadorIdade = contadorIdade + 1 ;
    
    if(idade >= 21){
        contador21 = contador21 + 1;
    }
    
    media = media + idade;
    
    printf("Digite 1 para continuar ou 0 para parar: ");
    scanf("%d", &continuar);
    while(continuar != 1 && continuar != 0 ){
        printf("Digite apenas 1 ou 0! ");
        scanf("%d", &continuar);
    }
    } while (continuar != 0);
    media = media / contadorIdade;
    printf("\nForam digitadas %d idades.", contadorIdade);
    printf("\nA média das idades é de %f anos.", media);
    printf("\n%d pessoas tem 21 anos ou mais.",contador21);
    return 0;
}