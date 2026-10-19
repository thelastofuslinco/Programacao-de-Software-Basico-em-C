#include <stdio.h>

void terminal_input(int number){
    if (number == 0) {
        return;
    }

    scanf("%d", &number);
    printf("Você digitou: %d\n", number);
    terminal_input(number);
}

int main() {
    // loop to print numbers from 1 to 5
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    
    // loop recursive to read numbers from terminal until 0 is entered
    terminal_input(1);

    printf("Programa encerrado.\n");
    return 0;
}