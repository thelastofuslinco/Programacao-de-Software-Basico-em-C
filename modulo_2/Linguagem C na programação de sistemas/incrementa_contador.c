#include <stdio.h>

void incrementa_contador_static() {
    static int contador = 0;

    contador++;
    printf("Contador incrementado com static: %d\n", contador);
}

void incrementa_contador_dynamic() {
    int contador = 0;

    contador++;
    printf("Contador incrementado com dynamic: %d\n", contador);
}

int main() {
    printf("Incrementando contador com static\n");
    incrementa_contador_static();
    incrementa_contador_static();
    incrementa_contador_static();

    printf("\nIncrementando contador com dynamic\n");
    incrementa_contador_dynamic();
    incrementa_contador_dynamic();
    incrementa_contador_dynamic();
    return 0;
}