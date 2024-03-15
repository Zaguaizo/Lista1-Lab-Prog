#include <stdio.h>

int main() {
    float fahrenheit, celsius;
   
    printf("Escolha uma temperatura em Cº: \n");
    scanf("%f", &celsius);
    
    fahrenheit = (9 * celsius + 160) / 5;
    
    printf("O valor da temperatura escolhida em Fahrenheit é %fºF! ", fahrenheit);
    
    
   
    return 0;
}
