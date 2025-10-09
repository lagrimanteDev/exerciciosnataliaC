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
    float n1, dobro , tercaParte;
    printf("Digite o número: ");
    scanf("%f", &n1);
    dobro = n1 *2;
    printf("\n O seu dobro é %.2f", dobro);
    tercaParte = n1/3;
    printf("\n O seu sucessor é %.2f", tercaParte);    
    return 0;
}