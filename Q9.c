#include <stdio.h>

int main() {
    int x;
    
    printf("Escolha um número inteiro: ");
    scanf("%d", &x);
    printf("O sucessor do número escolhido é: %d\n", x + 1);
    printf("O antecessor do número escolhido é: %d\n", x - 1);
    
    return 0;
}
