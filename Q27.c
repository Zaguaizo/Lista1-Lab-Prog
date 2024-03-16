#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3, aritmetica, geometrica;

    printf("Digite três números:");
    scanf("%f %f %f", &num1, &num2, &num3);
    
    aritmetica = (num1 + num2 + num3) / 3;
    geometrica = pow(num1 * num2 * num3, 1.0/3);
    
    printf("A média aritmética dos números é:%f\n", aritmetica);
    printf("A média geométrica dos números é:%f\n", geometrica);
    
    return 0;
}
