#include <stdio.h>

int main() {
    float altura, peso;
    char sexo;

    printf("Qual a altura da pessoa?: ");
    scanf("%f", &altura);
    
    
    printf("Qual o sexo da pessoa, M ou F?: ");
    scanf(" %c", &sexo);
    

    if (sexo == 'M' || sexo == 'm') {
        peso = 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso = 62.1 * altura - 44.7;
    } else {
        printf("Bote outra coisa, nao deu certo\n");
        return 1;
    }

    printf("O peso ideal do indivíduo é: %.2f\n", peso);

    return 0;
}
