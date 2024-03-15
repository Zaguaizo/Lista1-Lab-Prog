#include <stdio.h>

int main() {
    int x, y;
    float z;
    printf("Insira 2 números: ");
    scanf("%d %d", &x, &y);
     
    z = x / y;
     
    printf("O valor da soma é: %d\n", x + y);
    printf("O valor do produto é: %d\n", x * y);
    printf("O valor da diferença é: %d\n", x - y);
    printf("O valor do quociente é: %.0f\n", z);
    printf("O valor do resto é: %d\n", x % y);
   
    return 0;
}
