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
   srand(time(NULL));
   int num = (rand() % 3) + 1;
   int usuario = 0 ;
   
   printf("Digie 1 para Tesoura , 2 para Pedra , 3 para Papel: ");
   scanf("%d", &usuario);
   
   while (usuario != 1 && usuario!= 2 && usuario !=3){
       printf("Digite um valor valido");
   }
   
   if (usuario == 1 && num == 3 ){
       printf("Você Ganhou!, Tesoura ganha de Papel");
   }
   else if (usuario == 2 && num == 1){
        printf("Você Ganhou!, Pedra ganha de Tesoura");       
   }
   else if (usuario == 3 && num == 2){
       printf("Você Ganhou!, Papel ganha de Pedra");
   }
   else if (usuario == num){
       printf("Empate");
   }
   else{
       printf("Você perdeu %d", num);
   }


    return 0;
}