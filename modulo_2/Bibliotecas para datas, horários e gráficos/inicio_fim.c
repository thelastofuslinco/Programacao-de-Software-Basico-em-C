#include <stdio.h>
#include <time.h>
#include <unistd.h> // Para a função sleep

int main() {
    time_t inicio, fim;
    double diferenca;

    // Obter o tempo de início
    time(&inicio);
    printf("Tempo de início: %s", ctime(&inicio));

    // Simular algum processamento com um atraso
    for (int i = 0; i < 5; i++){
        printf("Processando... %d\n", i + 1);
        sleep(1); // Loop para simular atraso
    }

    // Obter o tempo de fim
    time(&fim);
    printf("Tempo de fim: %s", ctime(&fim));

    // Calcular a diferença em segundos
    diferenca = difftime(fim, inicio);
    printf("Diferença de tempo: %.2f segundos\n", diferenca);

    return 0;
}