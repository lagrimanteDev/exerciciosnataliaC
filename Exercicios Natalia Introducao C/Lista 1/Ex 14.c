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
    float km , dia , total= 0;
    
    printf("Digite quantidade de Km's rodados: ");
    scanf("%f", &km);
    printf("Digite quantidade de dias alugados: ");
    scanf("%f", &dia);
    total = ((dia * 90) + (km * 0.20));
    printf("Valor do aluguel: %.2f" , total );


    return 0;
}