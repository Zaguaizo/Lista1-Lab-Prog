#include <stdio.h>

int main() {
    
    float raio, pi;
    
    printf("Qual o raio da circunferência desejada?");
    scanf("%f", &raio);
    
    pi =  3.14159;

    printf("O diâmetro da circunferência é %f\n", 2 * raio);
    printf("A medida da circunferência é %f\n", 2 * raio * pi);
    printf("A área da circunferência é %f\n", pi * (raio*raio));
    
    
    return 0;
}
