#include <stdio.h>

int main() {
    float n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("O maior numero eh: %.2f\n", n1);
    } else if (n2 > n1) {
        printf("O maior numero eh: %.2f\n", n2);
    } else {
        printf("Os dois numeros sao iguais: %.2f\n", n1);
    }

    return 0;
}