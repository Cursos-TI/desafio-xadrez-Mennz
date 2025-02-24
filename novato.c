#include <stdio.h>

int main() {
    int opcao;
    int direcao;
    int casas;

    while (1) { 
        printf("\n*** Menu principal ***\n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("0. Sair do jogo\n");
        printf("Escolha qual peça você quer mexer: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            break; //fecha o programa
        }

         switch (opcao) {
            case 1: // Torre
                printf("\n*** Movimentação da Torre ***\n");
                printf("1. Para cima\n");
                printf("2. Para baixo\n");
                printf("3. Para a esquerda\n");
                printf("4. Para a direita\n");
                printf("Escolha a direção: \n");
                scanf("%d", &direcao);

                if (direcao >= 1 && direcao <= 4) {
                    printf("Quantas casas você quer mover? ");
                    scanf("%d", &casas);

                    printf("Movendo a Torre: \n");
                    for (int i = 0; i < casas; i++) {
                        switch (direcao) {
                            case 1: printf("Cima\n"); break;
                            case 2: printf("Baixo\n"); break;
                            case 3: printf("Esquerda\n"); break;
                            case 4: printf("Direita\n"); break;
                        }
                    }
                } else {
                    printf("Direção inválida!\n");
                }
                break;

            case 2: // Bispo
                printf("\n*** Movimentação do Bispo ***\n");
                printf("1. Diagonal Direita Superior\n");
                printf("2. Diagonal Esquerda Superior\n");
                printf("3. Diagonal Direita Inferior\n");
                printf("4. Diagonal Esquerda Inferior\n");
                printf("Escolha a direção: \n");
                scanf("%d", &direcao);

                if (direcao >= 1 && direcao <= 4) {
                    printf("Quantas casas você quer mover? ");
                    scanf("%d", &casas);

                    printf("Movendo o Bispo: \n");
                    for (int i = 0; i < casas; i++) {
                        switch (direcao) {
                            case 1: printf("Diagonal Direita Superior\n"); break;
                            case 2: printf("Diagonal Esquerda Superior\n"); break;
                            case 3: printf("Diagonal Direita Inferior\n"); break;
                            case 4: printf("Diagonal Esquerda Inferior\n"); break;
                        }
                    }
                } else {
                    printf("Direção inválida!\n");
                }
                break;

                case 3: // Rainha
                printf("\n*** Movimentação da Rainha ***\n");
                printf("1. Para cima\n");
                printf("2. Para baixo\n");
                printf("3. Para a esquerda\n");
                printf("4. Para a direita\n");
                printf("Escolha a direção: \n");
                scanf("%d", &direcao);

                if (direcao >= 1 && direcao <= 4) {
                    printf("Quantas casas você quer mover? ");
                    scanf("%d", &casas);

                    printf("Movendo a Rainha: \n");
                    for (int i = 0; i < casas; i++) {
                        switch (direcao) {
                            case 1: printf("Cima\n"); break;
                            case 2: printf("Baixo\n"); break;
                            case 3: printf("Esquerda\n"); break;
                            case 4: printf("Direita\n"); break;
                        }
                    }
                } else {
                    printf("Direção inválida!\n");
                }
                break;

            default:
            printf("Opção inválida! Tente novamente.\n");
        }
    }

    printf("Programa encerrado.\n");
    return 0;
}
