#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <linux/input.h>

int main() {
    // Substitua pelo número do evento do seu mouse ou teclado
    const char *dev = "/dev/input/event0";
    
    // Abre o dispositivo apenas para leitura
    int fd = open(dev, O_RDONLY);
    if (fd == -1) {
        perror("Erro ao abrir dispositivo (Dica: rode com sudo)");
        return EXIT_FAILURE;
    }

    struct input_event ev;
    printf("Lendo eventos de %s... Pressione Ctrl+C para sair.\n", dev);

    while (1) {
        // Lê a estrutura do evento a partir do arquivo
        ssize_t n = read(fd, &ev, sizeof(ev));
        
        if (n == (ssize_t)-1) {
            perror("Erro na leitura");
            break;
        } else if (n != sizeof(ev)) {
            continue; // Ignora leituras fragmentadas
        }

        // Filtra e exibe os eventos
        if (ev.type == EV_KEY) {
            // Eventos de teclado e cliques de mouse
            printf("Tecla/Botao | Codigo: %d | Estado: %d (0=Solto, 1=Press, 2=Repeticao)\n", ev.code, ev.value);
        } 
        else if (ev.type == EV_REL) {
            // Movimentos de mouse (eixos X e Y)
            printf("Movimento Mouse | Eixo: %d | Valor (Distancia): %d\n", ev.code, ev.value);
        }
    }

    close(fd);
    return EXIT_SUCCESS;
}