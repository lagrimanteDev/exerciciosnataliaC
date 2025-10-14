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
    int n1;
    printf("Digite o número: ");
    scanf("%d", &n1);
    n1--;
    printf("\n O seu antecessor é %d", n1);
    n1 = n1+2;
    printf("\n O seu sucessor é %d", n1);    
    return 0;
}