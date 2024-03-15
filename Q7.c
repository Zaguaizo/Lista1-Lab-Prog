#include <stdio.h>

int main() {
    int horas, minutos, segundos, segundos_totais;
   

    printf("Quantas horas?: ");
    scanf("%d", &horas);
    
    printf("Quanto0s minutos?: ");
    scanf("%d", &minutos);
    
    printf("Quantos segundos?: ");
    scanf("%d", &segundos);
    
    segundos_totais = ((3600 * horas) + (60 * minutos) + segundos);
    

    printf("A quantidade total de segundos é: %d\n", segundos_totais);
    
    
    return 0;
}
