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
    
    int contadorF = 0, contador100 = 0;
    char sexo , sexo2;
    float peso = 0, mediaMulheres = 0, maiorPesoHomem ;
    
    
    
   for (int i = 0 ; i < 8 ; i++){
    printf("Digite o sexo da pessoa [M/F]: ");
    scanf("%s", &sexo);
    sexo2 = toupper(sexo);
    while(sexo2 != 'M' && sexo2 !='F'){
    printf("Digite uma entrada valida: ");
    scanf("%s", &sexo2);
    }
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    if(sexo2 == 'F'){
        contadorF = contadorF + 1;
        mediaMulheres = mediaMulheres + peso;
    }
    else{
        if(peso > 100){
            contador100 = contador100 + 1; 
        }
        if(i == 0 ){
            maiorPesoHomem = peso;
        }
        else {
            if(maiorPesoHomem < peso){
                maiorPesoHomem = peso;
            }
        }
    }
   }
   mediaMulheres = mediaMulheres / contadorF;
   
   printf("\n Foram cadastradas %d mulheres.", contadorF);
   printf("\n %d homens pesam mais de 100 kg.", contador100);
   printf("\n A media de peso entre as mulheres é: %.2f", mediaMulheres);
   printf("\n O maior peso entre os homens é: %.2f", maiorPesoHomem);
}