#include <stdio.h>
#define PI 3.14159

int main(){
    float raio, area;

    raio = 5.0;
    area = PI * raio * raio;
    
    printf("A área do círculo com raio %.2f é: %.2f\n", raio, area);
    
    return 0;
}