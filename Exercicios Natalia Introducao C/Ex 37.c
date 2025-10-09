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

    int anos = 0 ;
    float sal = 0  ;
    char sexo, sexo2 ;
   
    printf("Informe o salário atual: ");
    scanf("%f", &sal);
    printf("Digite o seu sexo [M/F]: ");
    scanf("%s", &sexo);
    printf("Digite quantos anos trabalhados: ");
    scanf("%d", &anos);
    sexo2 = toupper(sexo);
    
    switch (sexo2){
        case 'F':
        if (anos < 15){
        sal = sal * 1.05;    
        }
        else if(anos >= 15 &&  anos <=20){
        sal = sal * 1.12;    
        }
        else if(anos > 20){
        sal = sal * 1.23;  
        }
        break;
        
        case 'M':
        if (anos < 20){
        sal = sal * 1.03;    
        }
        else if(anos >= 20 &&  anos <=30){
        sal = sal * 1.13;    
        }
        else if(anos > 30){
        sal = sal * 1.25;  
        }
        break;
        
        
        default:
    } 

    printf("Você irá receber R$: %.2f!", sal);
    
    return 0;
}