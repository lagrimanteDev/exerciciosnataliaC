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
   srand(time(NULL));
   int num = (rand() % 10);
   int cont = 0, numeros[20], acima5 = 0 , divisivel3 = 0;
   int cont2 = 0;

   
   while (cont < 20){
      numeros[cont] = num;
      if(numeros[cont] > 5){
          acima5 = acima5 + 1;
      }
      else if(numeros[cont] % 3 == 0){
          divisivel3 = divisivel3 + 1;
      }
      num = (rand() % 10);
      cont++;
   }
   
    printf("Números impressos: ");
    while(cont2 < 20){
    printf("%d", numeros[cont2]);
    cont2++;
    }
    
    printf("\n%d numeros acima de 5. %d numeros divisiveis por 3.", acima5 , divisivel3);
    return 0;
}