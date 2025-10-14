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
    float mediaH = 0;
    int continuar = 0, idade = 0, maiorIdade = 0, contadorH = 0, menorIdadeFeminio = 999;
    char sexo, sexo2;

    printf("Digite 1 para continuar ou 0 para parar: ");
    scanf("%d", &continuar);

    while (continuar != 0) {

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);
    printf("Digite o sexo da pessoa [M/F]: ");
    scanf("%s", &sexo);
    sexo2 = toupper(sexo);

    if (idade > maiorIdade) {
            maiorIdade = idade;
        }

    if (sexo2 == 'M') {
        mediaH += idade;
        contadorH = contadorH + 1;
        }
    else if (sexo2 == 'F') {
        if (idade < menorIdadeFeminio) {
            menorIdadeFeminio = idade;
            }
        }

    printf("Digite 1 para continuar ou 0 para parar: ");
    scanf("%d", &continuar);
    }

    if (contadorH > 0)
    mediaH = mediaH / contadorH;

    printf("\nMaior idade: %d", maiorIdade);
    printf("\nHomens cadastrados: %d", contadorH);

    if (menorIdadeFeminio != 999){
        printf("\nIdade da mulher mais jovem: %d", menorIdadeFeminio);
    }
    printf("\nMédia de idade entre homens: %.2f", mediaH);

    return 0;
}
