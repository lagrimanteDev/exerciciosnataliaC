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
    int  a  = 1 ;
    int num = 0;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &num);
    
    while (num <=0){
        printf("Digite um número inteiro e positivo: ");
        scanf("%d", &num); 
    }
    
    printf("\n Contagem: ");
        
    while (a <= num && a >= 1 ){
       printf("%d ", a);
       a++;
        }
        
    printf("Acabou!");

    return 0;
}