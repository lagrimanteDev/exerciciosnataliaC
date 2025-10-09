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

    float peso, altura, imc = 0 ;
    
   
    printf("Digite o valor do seu peso: ");
    scanf("%f", &peso);
    printf("Digite o valor da sua altura: ");
    scanf("%f", &altura);
 
    imc = peso / (pow(altura, 2)); 

    
    
    if ( imc < 18.5){
        printf("Abaixo do peso!");
    }
    else if (imc >= 18.5 && imc < 25){
        printf("Peso ideal!");
    }
    else if (imc >= 25 && imc < 30){
        printf("Sobrepeso!");
    }
    else if (imc >= 30 && imc < 40){
        printf("Obesidade!");
    }
    else {
        printf("Obesidade morbida!");
    }
    return 0;
}