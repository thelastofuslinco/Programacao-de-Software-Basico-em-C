#include <stdio.h>

void printTemperatureMessage();
void printClientChoiceMessage();

int main() {
    printTemperatureMessage();
    printClientChoiceMessage();
    return 0;
}

void printTemperatureMessage() {
    int temperature;

    printf("Digite a temperatura em Celsius: ");
    scanf("%d", &temperature);

    if (temperature < 0) {  
        printf("Está muito frio!\n");
    } else if (temperature >= 0 && temperature <= 20) {
        printf("Está frio!\n");
    } else if (temperature > 20 && temperature <= 30) {
        printf("Está agradável!\n");
    } else {
        printf("Está quente!\n");
    }
}

void printClientChoiceMessage() {
    int choice;

    printf("Escolha uma opção (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Você escolheu a opção 1.\n");
            break;
        case 2:
            printf("Você escolheu a opção 2.\n");
            break;
        case 3:
            printf("Você escolheu a opção 3.\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}
