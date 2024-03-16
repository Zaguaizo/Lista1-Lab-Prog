#include <stdio.h>

int main() {
    int horas, segundos, minutos, x;
    
    printf("Quantos segundos você quer organizar?\n");
    scanf("%d", &x);
    
    if(x < 60){
        segundos == x;
    } else if(x > 60 && x < 3600){
        segundos = x % 60;
        minutos = x / 60;
    } else{
        segundos = x % 3600;
        minutos = x % 60;
        horas = x / 3600;
    }
    
    printf("Você possui %d horas, %d minutos e %d segundos!", horas, minutos, segundos);
}
