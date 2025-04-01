#include <stdio.h>

// Move o bispo para a diagonal superior direita
void moveBispo(int dist) {
    printf("Bispo:\n\n");
    int i = 0;
    do {
        printf("Cima Direita\n");
        i++;
    } while (i < dist);
    printf("\n");
}

// Move a torre para a direita
void moveTorre(int dist) {
    printf("Torre:\n\n");
    int i = 0;
    while (i < dist) {
        printf("Direita\n");
        i++;
    }
    printf("\n");
}

// Move a Dama para a esquerda
void moveDama(int dist) {
    printf("Dama:\n\n");
    for (int i = 0; i < dist; i++) {
        printf("Esquerda\n");
    }
    printf("\n");
}

int main() {
    const int dist_bispo = 5;
    const int dist_torre = 5;
    const int dist_dama = 8;

    moveBispo(dist_bispo);
    moveTorre(dist_torre);
    moveDama(dist_dama);

    // Agarda o ENTER para finalizar a exexução
    char buff;
    printf("Pessione enter para sair...");
    scanf("%c", buff);
    getchar();

    return 0;
}
