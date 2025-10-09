/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ano = 0 ;
    
    printf("Digite o ano para ser bissexto: ");
    scanf("%d", &ano);
    
    if (ano >= 0){
        if(ano % 4 == 0 ){
            printf("Ano bissexto");
        }
        else{
        printf("Ano normal");
    }
    }
    
    

    return 0;
}
