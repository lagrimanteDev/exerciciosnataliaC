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
    float  qtd , ano , min, tempoPerdido,  total= 0;
    
     printf("Digite quantidade de cigarros fumados: ");
    scanf("%f", &qtd);
    printf("Digite quantidade de anos fumando: ");
    scanf("%f", &ano);
    total = qtd * ano * 365;
    min = total * 10;
    tempoPerdido = min /(60 *24);
    printf("Tempo Perdido em dias: %.2f" , tempoPerdido );


    return 0;
}