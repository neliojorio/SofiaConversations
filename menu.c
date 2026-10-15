#include <stdio.h>

void verificarSinal(void);
void verificarParidade(void);

int main(void) {
    int opcao;

    printf("MENU\n");
    printf("1 - Verificar se o valor e zero, positivo ou negativo\n");
    printf("2 - Verificar se o valor e par ou impar\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");

    if (scanf("%d", &opcao) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    switch (opcao) {
        case 1:
            verificarSinal();
            break;

        case 2:
            verificarParidade();
            break;

        case 0:
            printf("Encerrando.\n");
            break;

        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}

void verificarSinal(void) {
    double valor;

    printf("Digite um valor: ");
    if (scanf("%lf", &valor) != 1) {
        printf("Entrada invalida.\n");
        return;
    }

    if (valor == 0) {
        printf("0\n");
    } else if (valor > 0) {
        printf("1\n");
    } else {
        printf("-1\n");
    }
}

void verificarParidade(void) {
    int valor;

    printf("Digite um numero inteiro: ");
    if (scanf("%d", &valor) != 1) {
        printf("Entrada invalida.\n");
        return;
    }

    if (valor % 2 == 0) {
        printf("0\n");
    } else {
        printf("1\n");
    }
}