#include <stdio.h>

int main() {
    int quantidade = 0;
    int contador = 0;
    int number = 2;

    printf("Digite quantos numeros primos você deseja encontrar: ");
    scanf("%d", &quantidade);

    while (contador < quantidade) {
        int isPrime = 1;

        for (int divisor = 2; divisor * divisor <= number; divisor++) {
            if (number % divisor == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d\n", number);
            contador++;
        }

        number++;
    }

    return 0;
}