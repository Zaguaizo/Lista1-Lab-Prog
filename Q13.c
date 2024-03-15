#include <stdio.h>

int main() {
    int x, y, z;
   
    printf("Escolha o valor das variáveis x e y: \n");
    scanf("%d%d", &x, &y);
    
    z = x;
    x = y;
    y = z;
    
    printf("Agora o valor das varíaveis x e y são respectivamente %d e %d!!!!!", x , y);
    
    
   
    return 0;
}
