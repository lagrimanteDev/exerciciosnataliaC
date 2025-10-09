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
    float m;
    printf("Digite o valor em metros: ");
    scanf("%f", &m);
    printf("\n O seu valor em Km é %f", m/1000);
    printf("\n O seu valor em Hm é %f", m/100);
    printf("\n O seu valor em Dam é %f", m/10);
    printf("\n O seu valor em Dm é %f", m*10);
    printf("\n O seu valor em Cm é %f", m*100);
    printf("\n O seu valor em Mm é %f", m*1000);
    return 0;
}