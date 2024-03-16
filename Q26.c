#include <stdio.h>
#include <math.h>

int main() {
    float x1, x2, y1, y2, distancia;
    
    
    printf("Insira as coordenadas do primeiro ponto (x, y):\n");
    scanf("%f %f", &x1, &y1);
    printf("Insira as coordenadas do segundo ponto (x, y):\n");
    scanf("%f %f", &x2, &y2);
    
    
    distancia = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
    
    
    printf("A distância entre os dois pontos é: %.2f\n", distancia);
    
    return 0;
}
