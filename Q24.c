#include <stdio.h>

int main() {
    int x, n, resultado;

    printf("Insira o valor de x: ");
    scanf("%d", &x);

    printf("Insira o valor de n: ");
    scanf("%d", &n);

    resultado = x << n;

    printf("O resultado do produto de %d por 2 elevado à %d é: %d\n", x, n, resultado);

    return 0;
}
