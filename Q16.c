#include <stdio.h>

int main() {
    
   float horas, valor_horas, desconto, salario_liquido, salario_bruto;
   
   printf("Qual o valor da hora aula do professor em questão?");
   scanf("%f", &valor_horas);
   printf("Quantas horas trabalhou o professor em questão?");
   scanf("%f", &horas);
   printf("Qual o desconto aplicado pelo INSS?");
   scanf("%f", &desconto);
   
   salario_bruto = valor_horas * horas;
   salario_liquido = (valor_horas * horas) - ((valor_horas * horas) * (desconto / 100)) ;
    
   printf("O salário líquido é: %.2f\n", salario_liquido);
   printf("O salário bruto é: %.2f\n", salario_bruto);
   
   
   return 0;
}
