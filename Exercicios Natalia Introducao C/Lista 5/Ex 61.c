/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{   
    
    int cont = 0 ;
    
    do {
    printf("%d ", cont);
    cont = cont + 3 ;
    } while (cont <=30);
    printf("Acabou!");
    return 0;
}