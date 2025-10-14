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
    int num[7] , soma = 0, cont = 0 ;
    
    for(int i = 0 ; i < 7 ; i ++){
    printf("Digite o número inteiro da posição %d: ", i);
    scanf("%d", &num[i]);
    }
    
    
    while ( cont < 7 ){
      soma = soma + num[cont];
      cont++;
    }
        
    printf("O valor da soma é: %d ", soma);

    return 0;
}