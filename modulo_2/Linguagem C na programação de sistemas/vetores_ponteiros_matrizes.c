#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    int *numeros = (int *)malloc(5 * sizeof(int));
    if (numeros == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i <= 7; i++) {
        numeros[i] = i + 1;
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    free(numeros);
    return 0;
}