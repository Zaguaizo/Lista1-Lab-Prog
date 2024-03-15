#include <stdio.h>
#include <stdlib.h>

long int main() {
    
   int modulo, numero;
   printf("Escolha um número inteiro:");
   scanf("%d", &numero);
   
   modulo = abs(numero);
   
   printf("O módulo do número é : %d\n", modulo);
   
   
   return 0;
}
