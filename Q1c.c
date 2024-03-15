#include <stdio.h>

int main(){
  
    float x;
    
    //A ordem das operações desta equação é : 1º /, 2º *, 3º +, 4º *, 5º *//
    x = (3 * 9 * (3 + (9 * 3 / (3) ) ) );
    
    printf("%f", x);
    
    
    return 0;
    
}
