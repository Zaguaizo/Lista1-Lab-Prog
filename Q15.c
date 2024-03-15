#include <stdio.h>

int main() {
    
    int dias_trabalhados;
    float salario;
    
    printf("Quantos dias o funcionário trabalhou? ");
    scanf("%d", &dias_trabalhados);
    
    if(dias_trabalhados < 10 && dias_trabalhados == 10){
        salario = dias_trabalhados * 50.25;
    } else if(10 < dias_trabalhados && dias_trabalhados < 20){
        salario = (dias_trabalhados * 50.25) + ((dias_trabalhados * 50.25) * 0.1);
    } else  {  
        salario = (dias_trabalhados * 50.25) + ((dias_trabalhados * 50.25) * 0.3);
    }
    
    
    printf("O valor do salário do funcionário é: %.2f\n", salario);
    
    
    
    return 0;
   }
