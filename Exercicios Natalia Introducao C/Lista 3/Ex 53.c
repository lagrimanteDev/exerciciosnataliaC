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
 
    int idade = 0, cont = 0, contF = 0, contIdadeF = 0, contH = 0;
    char sexo, sexo2;
    float  mediaH = 0, mediaTotal = 0;
 
    while(cont < 5){
        printf("Digite o seu sexo [M/F]: ");
        scanf("%s", &sexo);
        sexo2 = toupper(sexo);
        
    if(sexo2 == 'F'){
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        mediaTotal = mediaTotal + idade;
        contF = contF + 1;
        if(idade > 20){
        contIdadeF = contIdadeF + 1;     
        }
    }
    
        
    if(sexo2 =='M'){
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        mediaH = mediaH + idade;
        mediaTotal = mediaTotal + idade;
        contH = contH + 1;
        
        
        
 
    }
    
    cont++;    
    
    }
    mediaH = mediaH /contH;
    mediaTotal = mediaTotal / 5;
    printf("Homens cadastrados %d: .", contH);
    printf("Mulheres cadastradas %d: \n.", contF);
    printf("Media das idades do grupo %.2f \n.", mediaTotal);
    printf("Media de idade dos homens %.2f \n.", mediaH);
    printf("Quantidade de mulheres com mais de 20 anos: %d \n.", contIdadeF);
    return 0;
}