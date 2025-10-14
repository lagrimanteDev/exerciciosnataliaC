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
   float continuar = 0, sal = 0,  somaH = 0 , somaF = 0 ;
   char sexo , sexo2;
   
    printf("Digite 1 para continuar ou 0 para parar [0/1]: ");
    scanf("%f", &continuar);

   while (continuar != 0){
        printf("Digite o salario da pessoa: ");
        scanf("%f", &sal);
        printf("Digite o sexo da pessoa [M/F]: ");
        scanf("%s", &sexo);
        sexo2 = toupper(sexo);
        
        while(sexo2 != 'M' && sexo2 != 'F'){
        printf("Digite apenas M ou F");
        scanf("%s", &sexo2);
        }
        if (sexo2 == 'M'){
        somaH = somaH + sal;   
        }
        else if (sexo2 == 'F'){
         somaF = somaF + sal;
        }
        printf("Digite 1 para continuar ou 0 para parar [0/1]: ");
        scanf("%f", &continuar);
   }

    printf("Total pago para homens: %.2f", somaH);
    printf("\nTotal pago para mulheres: %.2f", somaF);
    return 0;
}
