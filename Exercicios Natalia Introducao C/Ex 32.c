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
   int num = (rand() % 5) + 1;
   int usuario = 0 ;
   
   printf("Digite o valor a ser adivinhado de  1 a 5 : ");
   scanf("%d", &usuario);
   
    if (usuario == num){
       printf("Acertou");
   }
   else{
       printf("Você perdeu %d", num);
   }

    return 0;
}