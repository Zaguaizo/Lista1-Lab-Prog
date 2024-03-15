#include <stdio.h>

int main() {
    float cot_dolar, real, convertido;
    
    printf("Qual o valor em reais a ser convertido à dólar?");
    scanf("%f", &real);
    
    printf("Qual a cotação do dólar?");
    scanf("%f", &cot_dolar);
    
    convertido = cot_dolar * real;
    
    printf("O valor convetido é: %.2f\n", convertido);
   
    return 0;
}
