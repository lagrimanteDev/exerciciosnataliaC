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
    float sal  , anos = 0 ;
    char nome[50];
    printf("Digite o seu nome: ");
    fgets(nome, 50 , stdin);
    printf("Digite o seu salário em reais: ");
    scanf("%f", &sal);
    printf("Digite quantos anos você trabalha na empresa: ");
    scanf("%f", &anos);
  
    if (anos < 3){
        sal = sal * 1.03;
    }
    else if (anos >= 3 && anos < 10 ){
        sal = sal * 1.125;
    }
    
    else{
        sal = sal * 1.2;
    }

    printf("O seu novo salário %s",nome);printf( "é de: %.2f" , sal);
  return 0;
  
}
    