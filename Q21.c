#include <stdio.h>

int main() {
    int x, y;
    
    printf("Insira dois números inteiros: ");
    scanf("%d %d", &x , &y);
    
    const char *multiplo = (x % y == 0) ? "é multiplo" : "não é multiplo";
    printf("%d %s de %d!!!\n", x, multiplo, y);
    
    return 0;
}
