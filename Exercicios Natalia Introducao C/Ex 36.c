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
#include <ctype.h>

int main()
{

    int horas, pontos = 0 ;
    float total = 0  ;
   
    printf("Informe a quantidade de horas de atividade física: ");
    scanf("%d", &horas);
    if (horas < 10){
        pontos = horas * 2;
    }
    else if (horas >= 10 && horas < 20){
        pontos = horas * 5;
    }
    else if(horas > 20 ){
        pontos = horas * 10;
    }
    else{
        printf("Digite um valor de horas válido!");
    }
    
    printf("Você acumulou %d pontos . Irá receber %.2f" , pontos , (pontos * 0.05));
    
    return 0;
}