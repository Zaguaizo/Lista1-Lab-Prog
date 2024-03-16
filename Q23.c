#include <stdio.h>

int main() {
    int digitos, digito1, digito2, digito3, inverso;

    do {
        printf("Insira um número inteiro de três dígitos: ");
        scanf("%d", &digitos);
    } while (digitos < 100 && digitos > 999); 

    digito1 = digitos % 10;
    digito2 = (digitos / 10) % 10;
    digito3 = digitos / 100;

    inverso = digito1 * 100 + digito2 * 10 + digito3;

    printf("O número na ordem inversa é: %d\n", inverso);

    return 0;
}
