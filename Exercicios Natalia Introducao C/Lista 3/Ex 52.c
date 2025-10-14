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
   int idade ,media = 0 , mais18 = 0, menos5 = 0 ,maior = 0, cont = 0;
   
   while (cont < 10){
    printf("Digite a idade: " );
    scanf("%d",&idade);
    
    media = media + idade;
    
    if (cont == 0 ){
     maior = idade;
    }
    
    if(idade > maior){
     maior = idade;
        }
        
    if(idade > 18 ){
     mais18 = mais18 + 1;
        }
        
    if(idade < 5 ){
     menos5 = menos5 + 1;
    }
      cont++;
   }
   
   media = media/10;
   
    printf("\nValor da media das idades %d . Quantidade de pessoas com mais de 18 anos é: %d. Quantidade de pessoas com menos de 3 anos é: %d. Maior idade digitada %d.",media,  mais18 , menos5, maior );
    return 0;
}