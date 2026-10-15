#include <stdio.h>

int main(void) {
    double valor;

    printf("Digite um valor: ");
    scanf("%lf", &valor);

    if (valor == 0) {
        printf("0\n");
    } else if (valor > 0) {
        printf("1\n");
    } else {
        printf("-1\n");
    }

    return 0;
}