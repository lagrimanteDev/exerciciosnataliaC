/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>



int main()
{
   float  media = 0 , cont = 0;
   int idade = 0  ;

   
    printf("Digite a idade do aluno: ");
    scanf("%d", &idade);

   while (idade != 999){
        media = media + idade;
        cont = cont + 1;
        
        printf("Digite a idade do aluno: ");
        scanf("%d", &idade);
        
        
        
   }

    printf("Media de idade dos alunos: %.2f", media / cont );
    return 0;
}
