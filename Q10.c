int main() {
    float volume, altura, largura, comprimento;
    
    printf("Qual a altura da caixa?");
    scanf("%f", &altura);
    
    printf("Qual a largura da caixa?");
    scanf("%f", &largura);
    
    printf("Qual o comprimento da caixa?");
    scanf("%f", &comprimento);
    
    volume = comprimento * largura * altura;
    
    printf("O volume da caixa é: %f\n", volume);
   
    return 0;
}
