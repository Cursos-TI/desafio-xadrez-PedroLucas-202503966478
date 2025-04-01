#include <stdio.h>

// Move o bispo para a diagonal superior direita
void moveBispo(int dist) {
    printf("Bispo:\n\n");
    for (int i = 0; i < dist; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }
    printf("\n");
}

// funcao auxiliar para moveTorre
void _moveTorre(int dist) {
    if (dist < 1) {
        return;
    }

    printf("Direita\n");
    _moveTorre(dist-1);
}

// Move a torre para a direita
void moveTorre(int dist) {
    printf("Torre:\n\n");
    _moveTorre(dist);
    printf("\n");
}

// funcao auxiliar para moveDama
void _moveDama(int dist) {
    if (dist < 1) {
        return;
    }

    printf("Esquerda\n");
    _moveDama(dist-1);
}

// Move a Dama para a esquerda
void moveDama(int dist) {
    printf("Dama:\n\n");
    _moveDama(dist);
    printf("\n");
}

void moveCavalo(int dist) {
    printf("Cavalo:\n\n");
    for (int i = 0; i < dist; i++) {
        printf("Direita\n");
        int j = 0;
        while (j < 2) {
            printf("Cima\n");
            j++;
        }
    }
    printf("\n");
}

int main() {
    const int dist_bispo = 5;
    const int dist_torre = 5;
    const int dist_dama = 8;
    const int dist_cavalo = 1;

    moveBispo(dist_bispo);
    moveTorre(dist_torre);
    moveDama(dist_dama);
    moveCavalo(dist_cavalo);

    // Agarda o ENTER para finalizar a exexução
    char buff;
    printf("Pessione enter para sair...");
    scanf("%c", buff);
    getchar();

    return 0;
}
