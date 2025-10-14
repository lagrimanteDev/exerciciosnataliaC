/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>




int main()
{
    char nome[50] ;
    float sal =0 ;
    printf("Qual é o seu nome ?\n");
    scanf("%49[^\n]", nome);
    printf("Digite o seu salario!\n");
    scanf("%f", &sal);
    printf("O funcionário %s, tem um salário de %.2f: ", nome, sal);    
    return 0;
}