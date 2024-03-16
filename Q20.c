#include <stdio.h>

int main() {
    int numero;
    
    printf("Insira um número inteiro: ");
    scanf("%d", &numero);
    
    const char *impopa = (numero % 2 == 0) ? "par" : "ímpar";
    printf("O número %d é %s!!!\n", numero, impopa);
    
    return 0;
}
