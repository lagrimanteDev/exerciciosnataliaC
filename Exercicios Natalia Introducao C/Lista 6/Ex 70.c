/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main()
{   
    

    int c = 0 , a  = 0 , b = 1 ;
    
    
    
   for (int i = 0 ; i < 10  ; i++){
       if(i == 0){
         printf("1 ");  
       }
       c = a + b;
       printf("%d ",c);
       a = b;
       b = c;
       
   }
   
   
}