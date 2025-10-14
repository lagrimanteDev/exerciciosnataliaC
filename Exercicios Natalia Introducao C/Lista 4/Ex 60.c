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
#include <string.h>


int main()
{
    float media = 0;
    int continuar = 0, idade = 0, maiorIdade = 0, contadorH = 0, menorIdadeFeminio = 999, contador = 0, contador30 = 0, contador18 = 0  ;
    char sexo, sexo2, nome[100], nomeMaisVelho[100], nomeMulherMaisJovem[100];

    printf("Digite 1 para continuar ou 0 para parar: ");
    scanf("%d", &continuar);

    while (continuar != 0) {

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    printf("Digite o sexo da pessoa [M/F]: ");
    scanf("%s", &sexo);
    sexo2 = toupper(sexo);
    getchar();
    printf("Digite o seu nome: ");
    fgets(nome , sizeof(nome), stdin);
    
    
    media = media + idade ;
    if (idade > maiorIdade) {
            maiorIdade = idade;
            strcpy(nomeMaisVelho, nome);
        }

    if (sexo2 == 'M') {
        contadorH = contadorH + 1;
        if(idade > 30){
            contador30 = contador30 + 1;
        }
        }
    else if (sexo2 == 'F') {
        if(idade < 18){
            contador18 = contador18 + 1 ;
        }
        
        if (idade < menorIdadeFeminio) {
            menorIdadeFeminio = idade;
            strcpy(nomeMulherMaisJovem, nome);
            }
        }

    printf("Digite 1 para continuar ou 0 para parar: ");
    scanf("%d", &continuar);
    contador = contador + 1;
    }

    if (contadorH > 0)
    media = media / contador;

    printf("\nPessoa mais velha: %s", nomeMaisVelho);
    printf("\nMulher mais jovem: %s", nomeMulherMaisJovem);
    printf("\nIdade média do grupo: %.2f", media);
    printf("\nHomens acima dos 30: %d", contador30);
    printf("\nMulheres abaixo dos 18: %d", contador18);

    return 0;
}
